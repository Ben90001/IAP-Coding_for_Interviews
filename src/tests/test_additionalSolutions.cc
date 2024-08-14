#include <gtest/gtest.h>
#include "../additionalSolutions.cc"
#include"../config.hh"

#if TEST_FIB_ITER
TEST (additionalSolutions, fibonacci_iter) {
    //testing bad n values
    EXPECT_THROW(additionalSolutions::fibonacci_iter(-1), std::out_of_range);
    EXPECT_THROW(additionalSolutions::fibonacci_iter(89), std::out_of_range);

    ASSERT_NO_THROW(additionalSolutions::fibonacci_iter(0)) << "throw with additionalSolutions::fibonacci_iter(0)";
    EXPECT_EQ(additionalSolutions::fibonacci_iter(0),0) << "additionalSolutions::fibonacci_iter(0) is not 0";
    EXPECT_EQ(additionalSolutions::fibonacci_iter(1),1) << "additionalSolutions::fibonacci_iter(1) is not 1";
    ASSERT_NO_THROW(additionalSolutions::fibonacci_iter(5)) << "throw with additionalSolutions::fibonacci_iter(5)";
    EXPECT_EQ(additionalSolutions::fibonacci_iter(6),8) << "additionalSolutions::fibonacci_iter(5) is not 8";
    EXPECT_EQ(additionalSolutions::fibonacci_iter(40),102334155) << "additionalSolutions::fibonacci_iter(39) is not 102334155";

    //testing for long
    EXPECT_EQ(additionalSolutions::fibonacci_iter(88),1100087778366101931) << "additionalSolutions::fibonacci_iter(87) is not 1100087778366101931"; 
}
#endif

#if TEST_FIB_DP
TEST (additionalSolutions, fibonacci_DP) {
    //testing bad n values
    EXPECT_THROW(additionalSolutions::fibonacci_DP(-1), std::out_of_range);
    EXPECT_THROW(additionalSolutions::fibonacci_DP(89), std::out_of_range);

    ASSERT_NO_THROW(additionalSolutions::fibonacci_DP(0)) << "throw with additionalSolutions::fibonacci_DP(0)";
    EXPECT_EQ(additionalSolutions::fibonacci_DP(0),0) << "additionalSolutions::fibonacci_DP(0) is not 0";
    EXPECT_EQ(additionalSolutions::fibonacci_DP(1),1) << "additionalSolutions::fibonacci_DP(1) is not 1";
    ASSERT_NO_THROW(additionalSolutions::fibonacci_DP(5)) << "throw with additionalSolutions::fibonacci_DP(5)";
    EXPECT_EQ(additionalSolutions::fibonacci_DP(6),8) << "additionalSolutions::fibonacci_DP(5) is not 8";
    EXPECT_EQ(additionalSolutions::fibonacci_DP(40),102334155) << "additionalSolutions::fibonacci_DP(39) is not 102334155";

    //testing for long
    EXPECT_EQ(additionalSolutions::fibonacci_DP(88),1100087778366101931) << "additionalSolutions::fibonacci_DP(87) is not 1100087778366101931"; 
}
#endif

#if TEST_FIB_NAIVE
TEST (additionalSolutions, fibonacci_naive) {
    //NOTE: checks for valid n values not implemented for simplicity reasons

    ASSERT_NO_THROW(additionalSolutions::fibonacci_naive(0)) << "throw with additionalSolutions::fibonacci_naive(0)";
    EXPECT_EQ(additionalSolutions::fibonacci_naive(0),0) << "additionalSolutions::fibonacci_naive(0) is not 0";
    EXPECT_EQ(additionalSolutions::fibonacci_naive(1),1) << "additionalSolutions::fibonacci_naive(1) is not 1";
    ASSERT_NO_THROW(additionalSolutions::fibonacci_naive(5)) << "throw with additionalSolutions::fibonacci_naive(5)";
    EXPECT_EQ(additionalSolutions::fibonacci_naive(6),8) << "additionalSolutions::fibonacci_naive(5) is not 8";
    EXPECT_EQ(additionalSolutions::fibonacci_naive(40),102334155) << "additionalSolutions::fibonacci_naive(39) is not 102334155";

    if(COMPARABLE_TESTING){
    //testing for long
    EXPECT_EQ(additionalSolutions::fibonacci_naive(88),1100087778366101931) << "additionalSolutions::fibonacci_naive(87) is not 1100087778366101931";
    }
}
#endif

#if TEST_CS_ITER
TEST (additionalSolutions, climbStairs_iter) {
    //testing bad n values
    EXPECT_THROW(additionalSolutions::climbStairs_iter(0), std::out_of_range);
    EXPECT_THROW(additionalSolutions::climbStairs_iter(88), std::out_of_range);

    ASSERT_NO_THROW(additionalSolutions::climbStairs_iter(1)) << "throw with additionalSolutions::climbStairs_iter(1)";
    EXPECT_EQ(additionalSolutions::climbStairs_iter(1),1) << "additionalSolutions::climbStairs_iter(1) is not 1";
    ASSERT_NO_THROW(additionalSolutions::climbStairs_iter(5)) << "throw with additionalSolutions::climbStairs_iter(5)";
    EXPECT_EQ(additionalSolutions::climbStairs_iter(5),8) << "additionalSolutions::climbStairs_iter(5) is not 8";
    EXPECT_EQ(additionalSolutions::climbStairs_iter(39),102334155) << "additionalSolutions::climbStairs_iter(39) is not 102334155";

    //testing for long
    EXPECT_EQ(additionalSolutions::climbStairs_iter(87),1100087778366101931) << "additionalSolutions::climbStairs_iter(87) is not 1100087778366101931"; 
}
#endif

#if TEST_CS_DP
TEST (additionalSolutions, climbStairs_DP) {
    //testing bad n values
    EXPECT_THROW(additionalSolutions::climbStairs_DP(0), std::out_of_range);
    EXPECT_THROW(additionalSolutions::climbStairs_DP(88), std::out_of_range);

    ASSERT_NO_THROW(additionalSolutions::climbStairs_DP(1)) << "throw with additionalSolutions::climbStairs_DP(1)";
    EXPECT_EQ(additionalSolutions::climbStairs_DP(1),1) << "additionalSolutions::climbStairs_DP(1) is not 1";
    ASSERT_NO_THROW(additionalSolutions::climbStairs_DP(5)) << "throw with additionalSolutions::climbStairs_DP(5)";
    EXPECT_EQ(additionalSolutions::climbStairs_DP(5),8) << "additionalSolutions::climbStairs_DP(5) is not 8";
    EXPECT_EQ(additionalSolutions::climbStairs_DP(39),102334155) << "additionalSolutions::climbStairs_DP(39) is not 102334155";

    //testing for long
    EXPECT_EQ(additionalSolutions::climbStairs_DP(87),1100087778366101931) << "additionalSolutions::climbStairs_DP(87) is not 1100087778366101931"; 
}
#endif

#if TEST_CS_NAIVE
TEST (additionalSolutions, climbStairs_naive) {
    //NOTE: checks for valid n values not implemented for simplicity reasons

    ASSERT_NO_THROW(additionalSolutions::climbStairs_naive(1)) << "throw with additionalSolutions::climbStairs_naive(1)";
    EXPECT_EQ(additionalSolutions::climbStairs_naive(1),1) << "additionalSolutions::climbStairs_naive(1) is not 1";
    ASSERT_NO_THROW(additionalSolutions::climbStairs_naive(5)) << "throw with additionalSolutions::climbStairs_naive(5)";
    EXPECT_EQ(additionalSolutions::climbStairs_naive(5),8) << "additionalSolutions::climbStairs_naive(5) is not 8";
    EXPECT_EQ(additionalSolutions::climbStairs_naive(39),102334155) << "additionalSolutions::climbStairs_naive(39) is not 102334155";

    if(COMPARABLE_TESTING){
        //testing for long
        EXPECT_EQ(additionalSolutions::climbStairs_naive(87),1100087778366101931) << "additionalSolutions::climbStairs_naive(87) is not 1100087778366101931";
    }
     
}
#endif

#if TEST_UP_ITER
TEST (additionalSolutions, uniquePaths_iter){

    //test bad input
    EXPECT_THROW(additionalSolutions::uniquePaths_iter(0,1), std::out_of_range);
    EXPECT_THROW(additionalSolutions::uniquePaths_iter(1,0), std::out_of_range);
    EXPECT_THROW(additionalSolutions::uniquePaths_iter(31,1), std::out_of_range);
    EXPECT_THROW(additionalSolutions::uniquePaths_iter(1,31), std::out_of_range);


    EXPECT_EQ(additionalSolutions::uniquePaths_iter(3,2),3);
    EXPECT_EQ(additionalSolutions::uniquePaths_iter(3,7),28);
    EXPECT_EQ(additionalSolutions::uniquePaths_iter(5,12),1365);
    EXPECT_EQ(additionalSolutions::uniquePaths_iter(22,9),4292145);
    EXPECT_EQ(additionalSolutions::uniquePaths_iter(17,17),601080390);

    //testing for long 
    EXPECT_EQ(additionalSolutions::uniquePaths_iter(23,16),9364199760);
    EXPECT_EQ(additionalSolutions::uniquePaths_iter(30,30),30067266499541040);
    
}
#endif

#if TEST_UP_DP
TEST (additionalSolutions, uniquePaths_DP){

    //test bad input
    EXPECT_THROW(additionalSolutions::uniquePaths_DP(0,1), std::out_of_range);
    EXPECT_THROW(additionalSolutions::uniquePaths_DP(1,0), std::out_of_range);
    EXPECT_THROW(additionalSolutions::uniquePaths_DP(31,1), std::out_of_range);
    EXPECT_THROW(additionalSolutions::uniquePaths_DP(1,31), std::out_of_range);


    EXPECT_EQ(additionalSolutions::uniquePaths_DP(3,2),3);
    EXPECT_EQ(additionalSolutions::uniquePaths_DP(3,7),28);
    EXPECT_EQ(additionalSolutions::uniquePaths_DP(5,12),1365);
    EXPECT_EQ(additionalSolutions::uniquePaths_DP(22,9),4292145);
    EXPECT_EQ(additionalSolutions::uniquePaths_DP(17,17),601080390);

    //testing for long 
    EXPECT_EQ(additionalSolutions::uniquePaths_DP(23,16),9364199760);
    EXPECT_EQ(additionalSolutions::uniquePaths_DP(30,30),30067266499541040);
    
}
#endif

#if TEST_UP_NAIVE
TEST (additionalSolutions, uniquePaths_naive){
    
    //test bad input
    EXPECT_THROW(additionalSolutions::uniquePaths_naive(0,1), std::out_of_range);
    EXPECT_THROW(additionalSolutions::uniquePaths_naive(1,0), std::out_of_range);
    EXPECT_THROW(additionalSolutions::uniquePaths_naive(31,1), std::out_of_range);
    EXPECT_THROW(additionalSolutions::uniquePaths_naive(1,31), std::out_of_range);


    EXPECT_EQ(additionalSolutions::uniquePaths_naive(3,2),3);
    EXPECT_EQ(additionalSolutions::uniquePaths_naive(3,7),28);
    EXPECT_EQ(additionalSolutions::uniquePaths_naive(5,12),1365);

    if(COMPARABLE_TESTING){
        EXPECT_EQ(additionalSolutions::uniquePaths_naive(22,9),4292145);
        EXPECT_EQ(additionalSolutions::uniquePaths_naive(17,17),601080390);

        //testing for long 
        EXPECT_EQ(additionalSolutions::uniquePaths_naive(23,16),9364199760);
        EXPECT_EQ(additionalSolutions::uniquePaths_naive(30,30),30067266499541040);
    }
}
#endif

#if TEST_LPS_ITER
TEST (additionalSolutions, longestPalindromicSubstring_iter){

    //test edgecases
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_iter(""),"");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_iter("a"),"a");

    //uneven and even results
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_iter("aba"),"aba");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_iter("bbaabb"),"bbaabb");
    //somthing in front
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_iter("caba"),"aba");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_iter("cbbaabb"),"bbaabb");
    //somthing at the end
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_iter("abac"),"aba");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_iter("bbaabbc"),"bbaabb");

    //longer strings
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_iter("aostcto"),"tct");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_iter("meineomafährtimhühnerstallmotorrad"),"oto");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_iter("thisisareallyreallyreallylongishsentencebecauseweshouldalsotestwithverrylongstrings"),"cebec");
}
#endif

#if TEST_LPS_DP
TEST (additionalSolutions, longestPalindromicSubstring_DP){

    //test edgecases
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_DP(""),"");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_DP("a"),"a");

    //uneven and even results
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_DP("aba"),"aba");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_DP("bbaabb"),"bbaabb");
    //somthing in front
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_DP("caba"),"aba");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_DP("cbbaabb"),"bbaabb");
    //somthing at the end
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_DP("abac"),"aba");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_DP("bbaabbc"),"bbaabb");

    //longer strings
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_DP("aostcto"),"tct");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_DP("meineomafährtimhühnerstallmotorrad"),"oto");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_DP("thisisareallyreallyreallylongishsentencebecauseweshouldalsotestwithverrylongstrings"),"cebec");
}
#endif

#if TEST_LPS_NAIVE
TEST (additionalSolutions, longestPalindromicSubstring_naive){

    //test edgecases
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_naive(""),"");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_naive("a"),"a");

    //uneven and even results
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_naive("aba"),"aba");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_naive("bbaabb"),"bbaabb");
    //somthing in front
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_naive("caba"),"aba");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_naive("cbbaabb"),"bbaabb");
    //somthing at the end
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_naive("abac"),"aba");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_naive("bbaabbc"),"bbaabb");

    //longer strings
    if(COMPARABLE_TESTING){
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_naive("aostcto"),"tct");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_naive("meineomafährtimhühnerstallmotorrad"),"oto");
    EXPECT_EQ(additionalSolutions::longestPalindromicSubstring_naive("thisisareallyreallyreallylongishsentencebecauseweshouldalsotestwithverrylongstrings"),"cebec");
    }
}
#endif
