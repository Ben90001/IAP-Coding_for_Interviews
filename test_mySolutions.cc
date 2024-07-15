#include <gtest/gtest.h>
#include "mySolution.cc"


TEST (mySolutions, fibonacci_iter) {
    //testing bad n values
    EXPECT_THROW(mySolution::fibonacci_iter(-1), std::out_of_range);
    EXPECT_THROW(mySolution::fibonacci_iter(89), std::out_of_range);

    ASSERT_NO_THROW(mySolution::fibonacci_iter(0)) << "throw with mySolution::fibonacci_iter(0)";
    EXPECT_EQ(mySolution::fibonacci_iter(0),0) << "mySolution::fibonacci_iter(0) is not 0";
    EXPECT_EQ(mySolution::fibonacci_iter(1),1) << "mySolution::fibonacci_iter(1) is not 1";
    ASSERT_NO_THROW(mySolution::fibonacci_iter(5)) << "throw with mySolution::fibonacci_iter(5)";
    EXPECT_EQ(mySolution::fibonacci_iter(6),8) << "mySolution::fibonacci_iter(5) is not 8";
    EXPECT_EQ(mySolution::fibonacci_iter(40),102334155) << "mySolution::fibonacci_iter(39) is not 102334155";

    //testing for long
    EXPECT_EQ(mySolution::fibonacci_iter(88),1100087778366101931) << "mySolution::fibonacci_iter(87) is not 1100087778366101931"; 
}
TEST (mySolutions, fibonacci_DP) {
    //testing bad n values
    EXPECT_THROW(mySolution::fibonacci_DP(-1), std::out_of_range);
    EXPECT_THROW(mySolution::fibonacci_DP(89), std::out_of_range);

    ASSERT_NO_THROW(mySolution::fibonacci_DP(0)) << "throw with mySolution::fibonacci_DP(0)";
    EXPECT_EQ(mySolution::fibonacci_DP(0),0) << "mySolution::fibonacci_DP(0) is not 0";
    EXPECT_EQ(mySolution::fibonacci_DP(1),1) << "mySolution::fibonacci_DP(1) is not 1";
    ASSERT_NO_THROW(mySolution::fibonacci_DP(5)) << "throw with mySolution::fibonacci_DP(5)";
    EXPECT_EQ(mySolution::fibonacci_DP(6),8) << "mySolution::fibonacci_DP(5) is not 8";
    EXPECT_EQ(mySolution::fibonacci_DP(40),102334155) << "mySolution::fibonacci_DP(39) is not 102334155";

    //testing for long
    EXPECT_EQ(mySolution::fibonacci_DP(88),1100087778366101931) << "mySolution::fibonacci_DP(87) is not 1100087778366101931"; 
}
TEST (mySolutions, fibonacci_naive) {
    //NOTE: checks for valid n values not implemented for simplicity reasons

    ASSERT_NO_THROW(mySolution::fibonacci_naive(0)) << "throw with mySolution::fibonacci_naive(0)";
    EXPECT_EQ(mySolution::fibonacci_naive(0),0) << "mySolution::fibonacci_naive(0) is not 0";
    EXPECT_EQ(mySolution::fibonacci_naive(1),1) << "mySolution::fibonacci_naive(1) is not 1";
    ASSERT_NO_THROW(mySolution::fibonacci_naive(5)) << "throw with mySolution::fibonacci_naive(5)";
    EXPECT_EQ(mySolution::fibonacci_naive(6),8) << "mySolution::fibonacci_naive(5) is not 8";
    EXPECT_EQ(mySolution::fibonacci_naive(40),102334155) << "mySolution::fibonacci_naive(39) is not 102334155";

    if(COMPARABLE_TESTING){
    //testing for long
    EXPECT_EQ(mySolution::fibonacci_naive(88),1100087778366101931) << "mySolution::fibonacci_naive(87) is not 1100087778366101931";
    }
}


TEST (mySolutions, climbStairs_iter) {
    //testing bad n values
    EXPECT_THROW(mySolution::climbStairs_iter(0), std::out_of_range);
    EXPECT_THROW(mySolution::climbStairs_iter(88), std::out_of_range);

    ASSERT_NO_THROW(mySolution::climbStairs_iter(1)) << "throw with mySolution::climbStairs_iter(1)";
    EXPECT_EQ(mySolution::climbStairs_iter(1),1) << "mySolution::climbStairs_iter(1) is not 1";
    ASSERT_NO_THROW(mySolution::climbStairs_iter(5)) << "throw with mySolution::climbStairs_iter(5)";
    EXPECT_EQ(mySolution::climbStairs_iter(5),8) << "mySolution::climbStairs_iter(5) is not 8";
    EXPECT_EQ(mySolution::climbStairs_iter(39),102334155) << "mySolution::climbStairs_iter(39) is not 102334155";

    //testing for long
    EXPECT_EQ(mySolution::climbStairs_iter(87),1100087778366101931) << "mySolution::climbStairs_iter(87) is not 1100087778366101931"; 
}
TEST (mySolutions, climbStairs_DP) {
    //testing bad n values
    EXPECT_THROW(mySolution::climbStairs_DP(0), std::out_of_range);
    EXPECT_THROW(mySolution::climbStairs_DP(88), std::out_of_range);

    ASSERT_NO_THROW(mySolution::climbStairs_DP(1)) << "throw with mySolution::climbStairs_DP(1)";
    EXPECT_EQ(mySolution::climbStairs_DP(1),1) << "mySolution::climbStairs_DP(1) is not 1";
    ASSERT_NO_THROW(mySolution::climbStairs_DP(5)) << "throw with mySolution::climbStairs_DP(5)";
    EXPECT_EQ(mySolution::climbStairs_DP(5),8) << "mySolution::climbStairs_DP(5) is not 8";
    EXPECT_EQ(mySolution::climbStairs_DP(39),102334155) << "mySolution::climbStairs_DP(39) is not 102334155";

    //testing for long
    EXPECT_EQ(mySolution::climbStairs_DP(87),1100087778366101931) << "mySolution::climbStairs_DP(87) is not 1100087778366101931"; 
}
TEST (mySolutions, climbStairs_naive) {
    //NOTE: checks for valid n values not implemented for simplicity reasons

    ASSERT_NO_THROW(mySolution::climbStairs_naive(1)) << "throw with mySolution::climbStairs_naive(1)";
    EXPECT_EQ(mySolution::climbStairs_naive(1),1) << "mySolution::climbStairs_naive(1) is not 1";
    ASSERT_NO_THROW(mySolution::climbStairs_naive(5)) << "throw with mySolution::climbStairs_naive(5)";
    EXPECT_EQ(mySolution::climbStairs_naive(5),8) << "mySolution::climbStairs_naive(5) is not 8";
    EXPECT_EQ(mySolution::climbStairs_naive(39),102334155) << "mySolution::climbStairs_naive(39) is not 102334155";

    if(COMPARABLE_TESTING){
        //testing for long
        EXPECT_EQ(mySolution::climbStairs_naive(87),1100087778366101931) << "mySolution::climbStairs_naive(87) is not 1100087778366101931";
    }
     
}


TEST (mySolutions, uniquePaths_iter){

    //test bad input
    EXPECT_THROW(mySolution::uniquePaths_iter(0,1), std::out_of_range);
    EXPECT_THROW(mySolution::uniquePaths_iter(1,0), std::out_of_range);
    EXPECT_THROW(mySolution::uniquePaths_iter(31,1), std::out_of_range);
    EXPECT_THROW(mySolution::uniquePaths_iter(1,31), std::out_of_range);


    EXPECT_EQ(mySolution::uniquePaths_iter(3,2),3);
    EXPECT_EQ(mySolution::uniquePaths_iter(3,7),28);
    EXPECT_EQ(mySolution::uniquePaths_iter(5,12),1365);
    EXPECT_EQ(mySolution::uniquePaths_iter(22,9),4292145);
    EXPECT_EQ(mySolution::uniquePaths_iter(17,17),601080390);

    //testing for long 
    EXPECT_EQ(mySolution::uniquePaths_iter(23,16),9364199760);
    EXPECT_EQ(mySolution::uniquePaths_iter(30,30),30067266499541040);
    
}
TEST (mySolutions, uniquePaths_DP){

    //test bad input
    EXPECT_THROW(mySolution::uniquePaths_DP(0,1), std::out_of_range);
    EXPECT_THROW(mySolution::uniquePaths_DP(1,0), std::out_of_range);
    EXPECT_THROW(mySolution::uniquePaths_DP(31,1), std::out_of_range);
    EXPECT_THROW(mySolution::uniquePaths_DP(1,31), std::out_of_range);


    EXPECT_EQ(mySolution::uniquePaths_DP(3,2),3);
    EXPECT_EQ(mySolution::uniquePaths_DP(3,7),28);
    EXPECT_EQ(mySolution::uniquePaths_DP(5,12),1365);
    EXPECT_EQ(mySolution::uniquePaths_DP(22,9),4292145);
    EXPECT_EQ(mySolution::uniquePaths_DP(17,17),601080390);

    //testing for long 
    EXPECT_EQ(mySolution::uniquePaths_DP(23,16),9364199760);
    EXPECT_EQ(mySolution::uniquePaths_DP(30,30),30067266499541040);
    
}
TEST (mySolutions, uniquePaths_naive){
    
    //test bad input
    EXPECT_THROW(mySolution::uniquePaths_naive(0,1), std::out_of_range);
    EXPECT_THROW(mySolution::uniquePaths_naive(1,0), std::out_of_range);
    EXPECT_THROW(mySolution::uniquePaths_naive(31,1), std::out_of_range);
    EXPECT_THROW(mySolution::uniquePaths_naive(1,31), std::out_of_range);


    EXPECT_EQ(mySolution::uniquePaths_naive(3,2),3);
    EXPECT_EQ(mySolution::uniquePaths_naive(3,7),28);
    EXPECT_EQ(mySolution::uniquePaths_naive(5,12),1365);

    if(COMPARABLE_TESTING){
        EXPECT_EQ(mySolution::uniquePaths_naive(22,9),4292145);
        EXPECT_EQ(mySolution::uniquePaths_naive(17,17),601080390);

        //testing for long 
        EXPECT_EQ(mySolution::uniquePaths_naive(23,16),9364199760);
        EXPECT_EQ(mySolution::uniquePaths_naive(30,30),30067266499541040);
    }
}


TEST (mySolutions, longestPalindromicSubstring_iter){

    //test edgecases
    EXPECT_EQ(mySolution::longestPalindromicSubstring_iter(""),"");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_iter("a"),"a");

    //uneven and even results
    EXPECT_EQ(mySolution::longestPalindromicSubstring_iter("aba"),"aba");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_iter("bbaabb"),"bbaabb");
    //somthing in front
    EXPECT_EQ(mySolution::longestPalindromicSubstring_iter("caba"),"aba");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_iter("cbbaabb"),"bbaabb");
    //somthing at the end
    EXPECT_EQ(mySolution::longestPalindromicSubstring_iter("abac"),"aba");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_iter("bbaabbc"),"bbaabb");

    //longer strings
    EXPECT_EQ(mySolution::longestPalindromicSubstring_iter("aostcto"),"tct");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_iter("meineomafährtimhühnerstallmotorrad"),"oto");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_iter("thisisareallyreallyreallylongishsentencebecauseweshouldalsotestwithverrylongstrings"),"cebec");
}
TEST (mySolutions, longestPalindromicSubstring_DP){

    //test edgecases
    EXPECT_EQ(mySolution::longestPalindromicSubstring_DP(""),"");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_DP("a"),"a");

    //uneven and even results
    EXPECT_EQ(mySolution::longestPalindromicSubstring_DP("aba"),"aba");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_DP("bbaabb"),"bbaabb");
    //somthing in front
    EXPECT_EQ(mySolution::longestPalindromicSubstring_DP("caba"),"aba");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_DP("cbbaabb"),"bbaabb");
    //somthing at the end
    EXPECT_EQ(mySolution::longestPalindromicSubstring_DP("abac"),"aba");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_DP("bbaabbc"),"bbaabb");

    //longer strings
    EXPECT_EQ(mySolution::longestPalindromicSubstring_DP("aostcto"),"tct");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_DP("meineomafährtimhühnerstallmotorrad"),"oto");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_DP("thisisareallyreallyreallylongishsentencebecauseweshouldalsotestwithverrylongstrings"),"cebec");
}
TEST (mySolutions, longestPalindromicSubstring_naive){

    //test edgecases
    EXPECT_EQ(mySolution::longestPalindromicSubstring_naive(""),"");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_naive("a"),"a");

    //uneven and even results
    EXPECT_EQ(mySolution::longestPalindromicSubstring_naive("aba"),"aba");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_naive("bbaabb"),"bbaabb");
    //somthing in front
    EXPECT_EQ(mySolution::longestPalindromicSubstring_naive("caba"),"aba");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_naive("cbbaabb"),"bbaabb");
    //somthing at the end
    EXPECT_EQ(mySolution::longestPalindromicSubstring_naive("abac"),"aba");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_naive("bbaabbc"),"bbaabb");

    //longer strings
    if(COMPARABLE_TESTING){
    EXPECT_EQ(mySolution::longestPalindromicSubstring_naive("aostcto"),"tct");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_naive("meineomafährtimhühnerstallmotorrad"),"oto");
    EXPECT_EQ(mySolution::longestPalindromicSubstring_naive("thisisareallyreallyreallylongishsentencebecauseweshouldalsotestwithverrylongstrings"),"cebec");
    }
}