
#include<stdexcept>
#include<algorithm>

namespace providedSolutions{

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
}//namespace providedSolutions