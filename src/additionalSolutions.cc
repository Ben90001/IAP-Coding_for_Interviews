
#include<gtest/gtest.h>
#include<string>

/*--------------------------------------------------------------------------------
    Implement your own solutions in this file by defining the functions below.
    Do not change the signature of the functions.
    
    In order to activate testing for a function set the respecitv macro to 1
    You can find the macros in the config.hh file
----------------------------------------------------------------------------------*/

namespace additionalSolutions{

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