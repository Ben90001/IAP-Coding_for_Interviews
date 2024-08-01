
#include<stdexcept>

namespace providedSolutions{

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
}//namespace providedSolutions