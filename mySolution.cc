#include<stdexcept>
#include<string>
#include<cmath>
#include<vector>
#include<unordered_map>


namespace mySolution{

    std::string longestPalindromicSubstring_iter(std::string s){
        const int n= s.size();
        //iter over lengths (long->short)
        for(int len = n; 0<len; len--){         
            //iter over substrings of same length    
            for(int offset=0; offset<n; offset++){  
                if(offset+len-1 < n){
                    //check if palindrom
                    bool isPalindrom = true;
                    for(int i=0; i< len/2; i++){   
                        if(s[offset+i]==s[offset+len-1-i]) continue;
                        else{
                            isPalindrom = false;
                            break;
                        }
                    }
                    if(isPalindrom){
                        return s.substr(offset,len);
                    }
                }
                else break;
            }
        }
        return "";
    }

    std::string longestPalindromicSubstring_DP_recursion \
        (std::string *s, int lowerBound, int upperBound, std::unordered_map<std::string, std::string> *memo){
            int len = upperBound-lowerBound+1;

            //substring not yet computed
            if(memo->find(s->substr(lowerBound,len)) == memo->end()){
                //check if palindrom
                bool isPalindrom = true;
                for(int i=0; i< len/2; i++){
                    if((*s)[lowerBound+i]==(*s)[lowerBound+len-1-i]) continue;
                    else{
                        isPalindrom = false;
                        break;
                    }
                }
                //full substring is palindrom
                using pair = std::pair<std::string,std::string>;
                if(isPalindrom){
                    return memo->insert(pair(s->substr(lowerBound,len), s->substr(lowerBound,len))).first->first;
                }

                //compute longest palindrom in all subsubstrings
                if(lowerBound<upperBound){
                    memo->insert(pair(s->substr(lowerBound,len-1), longestPalindromicSubstring_DP_recursion(s, lowerBound, upperBound-1, memo)));
                    memo->insert(pair(s->substr(lowerBound+1,len-1), longestPalindromicSubstring_DP_recursion(s, lowerBound+1, upperBound, memo)));

                    if(memo->at(s->substr(lowerBound,len-1)).size() >= memo->at(s->substr(lowerBound+1,len-1)).size())
                        return memo->at(s->substr(lowerBound,len-1));
                    else
                        return memo->at(s->substr(lowerBound+1,len-1));
                }
            }

            //substring already computed
            return memo->at(s->substr(lowerBound,len));
    }

    std::string longestPalindromicSubstring_DP(std::string s){
        std::unordered_map<std::string, std::string> memo;
        return longestPalindromicSubstring_DP_recursion(&s,0,s.size()-1, &memo);
    }

    std::string longestPalindromicSubstring_naive(std::string s){
        int n = s.size();

        //basecase
        if(n==0) return "";
        if(n==1) return s;

        //check if palindrom  
        bool isPalindrom = true;
        //check from middle to edges
        for(int i=floor(n/2); i<n; i++){
            if(s[i]==s[n-i-1]) continue;
            else{
                isPalindrom = false;
                break;
            }
        }
        if(isPalindrom) return s;

        //check smaller substrings
        std::string result1= longestPalindromicSubstring_naive(s.substr(0,n-1));
        std::string result2= longestPalindromicSubstring_naive(s.substr(1,n-1));
        if(result1.size()<result2.size()) return result2;
        else return result1;
    }

    long uniquePaths_iter(int m, int n){

        //check preconditions
        if(!(1<=m && m<=30) || !(1<=n && n<=30)) throw std::out_of_range("Input out of bounds!");

        //compute result
        //following code has been taken from here: https://leetcode.com/problems/unique-paths/solutions/5423442/o-min-m-n-time-complexicity-solution-using-maths-c-solution/?envType=study-plan-v2&envId=dynamic-programming
        long long ans = 1;
            int x = std::max(m-1, n-1);
            int y = std::min(m-1, n-1);
            
            for (int i = 1; i <= y; ++i) {
                ans *= (x + i);
                ans /= i;
            }
            
            return ans;
    }

    long uniquePaths_DP_recursion(int m, int n, long **memo){
        if(memo[m][n]==-1){
            memo[m-1][n]= uniquePaths_DP_recursion(m-1,n,memo);
            memo[m][n-1]= uniquePaths_DP_recursion(m,n-1,memo);
            return memo[m][n] = memo[m-1][n] + memo[m][n-1];
        }
        else return memo[m][n];
    }
    long uniquePaths_DP(int m,int n){
        //check whether n and m are in bound
        if(!(1<=m && m<=30)) throw std::out_of_range("m is out of bounds!");
        if(!(1<=n && n<=30)) throw std::out_of_range("n is out of bounds!");

        //basecase
        if(m==1 || n==1) return 1;

        //define matrix
        long* storage_ptr=new long[(m+1)*(n+1)];    //allocate at once for cache efficiency
        //create accesser
        long** memo=new long*[m+1];
        for(int i=0;i<m+1;i++)memo[i]=storage_ptr + (n+1)*i;

        //initialize matrix with -1 except for basecases
        for(int i=0; i<=m; i++){
            for(int j=0; j<=n; j++) {
                if (i==1||j==1) memo[i][j] = 1;     //basecase
                else memo[i][j] = -1;               //uncalculated
            }
        }
        
        return uniquePaths_DP_recursion(m,n,memo);
    }

    long uniquePaths_naive(int m, int n){
        //check preconditions
        if(!(1<=m && m<=30) || !(1<=n && n<=30)) throw std::out_of_range("Input out of bounds!");

        //basecases
        if(m==1 || n==1) return 1;

        return uniquePaths_naive(m-1,n)+uniquePaths_naive(m,n-1);
    }




    //NOTE: this implementation works with an array, better would be: return fibonacci_iter(n+1);
    long climbStairs_iter(int n) {
        //check whether n is in bound
        if(!(1<=n && n<=87)) throw std::out_of_range("n is out of bounds!");

        if(n==1) return 1;
        if(n==2) return 2;

        long memo[n+1];
        memo[1]= 1;
        memo[2]= 2;
        //bottom up computation
        for(int i=3; i<n; i++) memo[i] = memo[i-1] + memo[i-2];
        return memo[n-1]+memo[n-2];
    }

    long climbStairs_DP_recursion(int n, long *memo){
        if(memo[n]== -1){
            memo [n-1] = climbStairs_DP_recursion(n-1, memo);
            memo [n-2] = climbStairs_DP_recursion(n-2, memo);
            return memo[n-1]+memo[n-2];
        }
        else return memo[n];
    }
    long climbStairs_DP(int n){
        //check whether n is in bound
        if(!(1<=n && n<=87)) throw std::out_of_range("n is out of bounds!");

        //initialize memo, negative values are always invalide
        long *memo = new long[n+1];
        memo[1] = 1;
        memo[2] = 2;
        for (int i = 3; i<=n; i++) memo[i] = -1;
        

        return climbStairs_DP_recursion(n, memo);
    }

    long climbStairs_naive(int n){
        if (n==1) return 1;
        if (n==2) return 2;
        return climbStairs_naive(n-1)+climbStairs_naive(n-2);
    }




    long fibonacci_iter(int n){
        //check whether n is in bound
        if(!(0<=n && n<=88)) throw std::out_of_range("n is out of bounds!");

        if (n==0) return 0;
        if (n==1) return 1;

        long a = 0;
        long b = 1;
        long c;

        for (int i = 1; i<n; i++){
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }

    long fibonacci_DP_recursion(int n, long* memo){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(memo[n]== -1){
            memo[n-1] = fibonacci_DP_recursion(n-1, memo);
            memo[n-2] = fibonacci_DP_recursion(n-2, memo);
            return memo[n]= memo[n-1] + memo[n-2];
        }
        else return memo[n];
    }
    long fibonacci_DP(int n){
        //check whether n is in bound
        if(!(0<=n && n<=88)) throw std::out_of_range("n is out of bounds!");

        if (n==0) return 0;

        long* memo = new long[n+1];
        for (int i=0; i<=n; i++){ memo[i]= -1; }
        memo[0]=0;
        memo[1]=1;

        return fibonacci_DP_recursion(n,memo);
    }

    long fibonacci_naive(int n){
        if(n==0) return 0;
        if(n==1) return 1;
        return fibonacci_naive(n-1) + fibonacci_naive(n-2);
    }
}
