
#include<stdexcept>

namespace providedSolutions{
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
}//namespace providedSolutions