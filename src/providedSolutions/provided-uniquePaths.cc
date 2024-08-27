
#include<stdexcept>
#include<algorithm>

namespace providedSolutions{

    long uniquePaths_iter(int m, int n){
        // check preconditions
        if(!(1<=m && m<=30) || !(1<=n && n<=30)) throw std::out_of_range("Input out of bounds!");

        // compute result
        // the following code has been taken from here: 
        // https://leetcode.com/problems/unique-paths/solutions/5423442/o-min-m-n-time-complexicity-solution-using-maths-c-solution/?envType=study-plan-v2&envId=dynamic-programming
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
        // recursive part: uncomputed case
        if(memo[m-1][n-1]==-1){
            return memo[m-1][n-1] = uniquePaths_DP_recursion(m-1,n,memo) \
                                + uniquePaths_DP_recursion(m,n-1,memo);
        }
        // use of memoization: precomputed case
        else return memo[m-1][n-1];
    }
    long uniquePaths_DP(int m,int n){
        // check preconditions
        if(!(1<=m && m<=30) || !(1<=n && n<=30)) \
            throw std::out_of_range("m and/or n is out of bounds!");

        // assert m,n > 1
        if(m==1 || n==1) return 1;

        // allocate matrix at once for cache efficiency
        long* storage_ptr=new long[m*n];

        // create accessor
        long** memo=new long*[m];
        for(int i=0;i<m;i++)memo[i]=storage_ptr + n*i;

        // initialize matrix
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++) {
                // base case
                if (i==0||j==0) memo[i][j] = 1; 
                // mark uncomputed   
                else memo[i][j] = -1;               
            }
        }

        // calculate result
        long result = uniquePaths_DP_recursion(m,n,memo);

        // clean up allocated memory
        delete[] storage_ptr;
        delete[] memo;

        return result;
    }

    long uniquePaths_naive(int m, int n){
        //check preconditions
        if(!(1<=m && m<=30) || !(1<=n && n<=30)) throw std::out_of_range("Input out of bounds!");

        //basecases
        if(m==1 || n==1) return 1;

        return uniquePaths_naive(m-1,n)+uniquePaths_naive(m,n-1);
    }
}//namespace providedSolutions