#include<string>

/*--------------------------------------------------------------------------------
    Set COMPARABLE_TESTING to true in order to activate the full test on naive 
    implementations.
    NOTE: This will greatly increase runtime of the affected tests.
----------------------------------------------------------------------------------*/
#define COMPARABLE_TESTING false

/*--------------------------------------------------------------------------------
    Implement your own solutions in this file by defining the functions below.
    Do not change the signature of the functions.
    
    In order to activate testing for a function set the respective macro to 1
    In order to deactivate testing for a function set the resprective macro to 0
    NOTE: Code will not compile if testing is enabled for undefined functions.
----------------------------------------------------------------------------------*/
    #define TEST_LPS_ITER 0
    #define TEST_LPS_DP 0
    #define TEST_LPS_NAIVE 0

    #define TEST_UP_ITER 0
    #define TEST_UP_DP 0
    #define TEST_UP_NAIVE 0

    #define TEST_CS_ITER 0
    #define TEST_CS_DP 0
    #define TEST_CS_NAIVE 0

    #define TEST_FIB_ITER 0
    #define TEST_FIB_DP 0
    #define TEST_FIB_NAIVE 0

namespace additionalSolution{


    std::string longestPalindromicSubstring_iter(std::string s);
    std::string longestPalindromicSubstring_DP(std::string s);
    std::string longestPalindromicSubstring_naive(std::string s);


    long uniquePaths_iter(int m, int n);
    long uniquePaths_DP(int m,int n);
    long uniquePaths_naive(int m, int n);


    long climbStairs_iter(int n) ;
    long climbStairs_DP(int n);
    long climbStairs_naive(int n);


    long fibonacci_iter(int n);
    long fibonacci_DP(int n);
    long fibonacci_naive(int n);
}