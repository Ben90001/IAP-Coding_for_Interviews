#include<string>
#include<unordered_map>

namespace providedSolutions{
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

}//namespace providedSolution