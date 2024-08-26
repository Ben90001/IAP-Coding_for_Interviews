
#include<stdexcept>

namespace providedSolutions{

    //NOTE: this implementation works with an array an implementation like fibonacci_iter would be more memory efficient
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

    //NOTE: We could simply integrate the base case check into memo (compare uniquePaths_DP)
    long climbStairs_DP_recursion(int n, long *memo){
        // base cases
        if(n==1) return 1;
        if(n==2) return 2;

        // uncomputed case: recursion
        if(memo[n-1]== -1)
            return memo[n-1]= climbStairs_DP_recursion(n-1, memo) \
                                + climbStairs_DP_recursion(n-2, memo);
        // precomputed case: use of memoization
        else return memo[n-1];
    }
    long climbStairs_DP(int n){
        //check whether n is in bound
        if(!(1<=n && n<=87)) throw std::out_of_range("n is out of bounds!");

        //initialize memo, negative values are always invalide
        long *memo = new long[n];
        for (int i = 0; i<n; i++) memo[i] = -1;
        
        return climbStairs_DP_recursion(n, memo);
    }

    long climbStairs_naive(int n){
        if (n==1) return 1;
        if (n==2) return 2;
        return climbStairs_naive(n-1)+climbStairs_naive(n-2);
    }
}//namespace providedSolutions