
#include <gtest/gtest.h>

#include "../providedSolutions/provided-fibonacci.cc"
#include "../providedSolutions/provided-climbingStairs.cc"
#include "../providedSolutions/provided-uniquePaths.cc"
#include "../providedSolutions/provided-longestPalindromicSubstring.cc"

#include"../config.hh"


TEST (providedSolutions, fibonacci_iter) {
    //testing bad n values
    EXPECT_THROW(providedSolutions::fibonacci_iter(-1), std::out_of_range);
    EXPECT_THROW(providedSolutions::fibonacci_iter(89), std::out_of_range);

    ASSERT_NO_THROW(providedSolutions::fibonacci_iter(0)) << "throw with providedSolutions::fibonacci_iter(0)";
    EXPECT_EQ(providedSolutions::fibonacci_iter(0),0) << "providedSolutions::fibonacci_iter(0) is not 0";
    EXPECT_EQ(providedSolutions::fibonacci_iter(1),1) << "providedSolutions::fibonacci_iter(1) is not 1";
    ASSERT_NO_THROW(providedSolutions::fibonacci_iter(5)) << "throw with providedSolutions::fibonacci_iter(5)";
    EXPECT_EQ(providedSolutions::fibonacci_iter(6),8) << "providedSolutions::fibonacci_iter(5) is not 8";
    EXPECT_EQ(providedSolutions::fibonacci_iter(40),102334155) << "providedSolutions::fibonacci_iter(39) is not 102334155";

    //testing for long
    EXPECT_EQ(providedSolutions::fibonacci_iter(88),1100087778366101931) << "providedSolutions::fibonacci_iter(87) is not 1100087778366101931"; 
}
TEST (providedSolutions, fibonacci_DP) {
    //testing bad n values
    EXPECT_THROW(providedSolutions::fibonacci_DP(-1), std::out_of_range);
    EXPECT_THROW(providedSolutions::fibonacci_DP(89), std::out_of_range);

    ASSERT_NO_THROW(providedSolutions::fibonacci_DP(0)) << "throw with providedSolutions::fibonacci_DP(0)";
    EXPECT_EQ(providedSolutions::fibonacci_DP(0),0) << "providedSolutions::fibonacci_DP(0) is not 0";
    EXPECT_EQ(providedSolutions::fibonacci_DP(1),1) << "providedSolutions::fibonacci_DP(1) is not 1";
    ASSERT_NO_THROW(providedSolutions::fibonacci_DP(5)) << "throw with providedSolutions::fibonacci_DP(5)";
    EXPECT_EQ(providedSolutions::fibonacci_DP(6),8) << "providedSolutions::fibonacci_DP(5) is not 8";
    EXPECT_EQ(providedSolutions::fibonacci_DP(40),102334155) << "providedSolutions::fibonacci_DP(39) is not 102334155";

    //testing for long
    EXPECT_EQ(providedSolutions::fibonacci_DP(88),1100087778366101931) << "providedSolutions::fibonacci_DP(87) is not 1100087778366101931"; 
}
TEST (providedSolutions, fibonacci_naive) {
    //NOTE: checks for valid n values not implemented for simplicity reasons

    ASSERT_NO_THROW(providedSolutions::fibonacci_naive(0)) << "throw with providedSolutions::fibonacci_naive(0)";
    EXPECT_EQ(providedSolutions::fibonacci_naive(0),0) << "providedSolutions::fibonacci_naive(0) is not 0";
    EXPECT_EQ(providedSolutions::fibonacci_naive(1),1) << "providedSolutions::fibonacci_naive(1) is not 1";
    ASSERT_NO_THROW(providedSolutions::fibonacci_naive(5)) << "throw with providedSolutions::fibonacci_naive(5)";
    EXPECT_EQ(providedSolutions::fibonacci_naive(6),8) << "providedSolutions::fibonacci_naive(5) is not 8";
    EXPECT_EQ(providedSolutions::fibonacci_naive(40),102334155) << "providedSolutions::fibonacci_naive(39) is not 102334155";

    if(COMPARABLE_TESTING){
    //testing for long
    EXPECT_EQ(providedSolutions::fibonacci_naive(88),1100087778366101931) << "providedSolutions::fibonacci_naive(87) is not 1100087778366101931";
    }
}


TEST (providedSolutions, climbStairs_iter) {
    //testing bad n values
    EXPECT_THROW(providedSolutions::climbStairs_iter(0), std::out_of_range);
    EXPECT_THROW(providedSolutions::climbStairs_iter(88), std::out_of_range);

    ASSERT_NO_THROW(providedSolutions::climbStairs_iter(1)) << "throw with providedSolutions::climbStairs_iter(1)";
    EXPECT_EQ(providedSolutions::climbStairs_iter(1),1) << "providedSolutions::climbStairs_iter(1) is not 1";
    ASSERT_NO_THROW(providedSolutions::climbStairs_iter(5)) << "throw with providedSolutions::climbStairs_iter(5)";
    EXPECT_EQ(providedSolutions::climbStairs_iter(5),8) << "providedSolutions::climbStairs_iter(5) is not 8";
    EXPECT_EQ(providedSolutions::climbStairs_iter(39),102334155) << "providedSolutions::climbStairs_iter(39) is not 102334155";

    //testing for long
    EXPECT_EQ(providedSolutions::climbStairs_iter(87),1100087778366101931) << "providedSolutions::climbStairs_iter(87) is not 1100087778366101931"; 
}
TEST (providedSolutions, climbStairs_DP) {
    //testing bad n values
    EXPECT_THROW(providedSolutions::climbStairs_DP(0), std::out_of_range);
    EXPECT_THROW(providedSolutions::climbStairs_DP(88), std::out_of_range);

    ASSERT_NO_THROW(providedSolutions::climbStairs_DP(1)) << "throw with providedSolutions::climbStairs_DP(1)";
    EXPECT_EQ(providedSolutions::climbStairs_DP(1),1) << "providedSolutions::climbStairs_DP(1) is not 1";
    ASSERT_NO_THROW(providedSolutions::climbStairs_DP(5)) << "throw with providedSolutions::climbStairs_DP(5)";
    EXPECT_EQ(providedSolutions::climbStairs_DP(5),8) << "providedSolutions::climbStairs_DP(5) is not 8";
    EXPECT_EQ(providedSolutions::climbStairs_DP(39),102334155) << "providedSolutions::climbStairs_DP(39) is not 102334155";

    //testing for long
    EXPECT_EQ(providedSolutions::climbStairs_DP(87),1100087778366101931) << "providedSolutions::climbStairs_DP(87) is not 1100087778366101931"; 
}
TEST (providedSolutions, climbStairs_naive) {
    //NOTE: checks for valid n values not implemented for simplicity reasons

    ASSERT_NO_THROW(providedSolutions::climbStairs_naive(1)) << "throw with providedSolutions::climbStairs_naive(1)";
    EXPECT_EQ(providedSolutions::climbStairs_naive(1),1) << "providedSolutions::climbStairs_naive(1) is not 1";
    ASSERT_NO_THROW(providedSolutions::climbStairs_naive(5)) << "throw with providedSolutions::climbStairs_naive(5)";
    EXPECT_EQ(providedSolutions::climbStairs_naive(5),8) << "providedSolutions::climbStairs_naive(5) is not 8";
    EXPECT_EQ(providedSolutions::climbStairs_naive(39),102334155) << "providedSolutions::climbStairs_naive(39) is not 102334155";

    if(COMPARABLE_TESTING){
        //testing for long
        EXPECT_EQ(providedSolutions::climbStairs_naive(87),1100087778366101931) << "providedSolutions::climbStairs_naive(87) is not 1100087778366101931";
    }
     
}


TEST (providedSolutions, uniquePaths_iter){

    //test bad input
    EXPECT_THROW(providedSolutions::uniquePaths_iter(0,1), std::out_of_range);
    EXPECT_THROW(providedSolutions::uniquePaths_iter(1,0), std::out_of_range);
    EXPECT_THROW(providedSolutions::uniquePaths_iter(31,1), std::out_of_range);
    EXPECT_THROW(providedSolutions::uniquePaths_iter(1,31), std::out_of_range);


    EXPECT_EQ(providedSolutions::uniquePaths_iter(3,2),3);
    EXPECT_EQ(providedSolutions::uniquePaths_iter(3,7),28);
    EXPECT_EQ(providedSolutions::uniquePaths_iter(5,12),1365);
    EXPECT_EQ(providedSolutions::uniquePaths_iter(22,9),4292145);
    EXPECT_EQ(providedSolutions::uniquePaths_iter(17,17),601080390);

    //testing for long 
    EXPECT_EQ(providedSolutions::uniquePaths_iter(23,16),9364199760);
    EXPECT_EQ(providedSolutions::uniquePaths_iter(30,30),30067266499541040);
    
}
TEST (providedSolutions, uniquePaths_DP){

    //test bad input
    EXPECT_THROW(providedSolutions::uniquePaths_DP(0,1), std::out_of_range);
    EXPECT_THROW(providedSolutions::uniquePaths_DP(1,0), std::out_of_range);
    EXPECT_THROW(providedSolutions::uniquePaths_DP(31,1), std::out_of_range);
    EXPECT_THROW(providedSolutions::uniquePaths_DP(1,31), std::out_of_range);


    EXPECT_EQ(providedSolutions::uniquePaths_DP(3,2),3);
    EXPECT_EQ(providedSolutions::uniquePaths_DP(3,7),28);
    EXPECT_EQ(providedSolutions::uniquePaths_DP(5,12),1365);
    EXPECT_EQ(providedSolutions::uniquePaths_DP(22,9),4292145);
    EXPECT_EQ(providedSolutions::uniquePaths_DP(17,17),601080390);

    //testing for long 
    EXPECT_EQ(providedSolutions::uniquePaths_DP(23,16),9364199760);
    EXPECT_EQ(providedSolutions::uniquePaths_DP(30,30),30067266499541040);
    
}
TEST (providedSolutions, uniquePaths_naive){
    
    //test bad input
    EXPECT_THROW(providedSolutions::uniquePaths_naive(0,1), std::out_of_range);
    EXPECT_THROW(providedSolutions::uniquePaths_naive(1,0), std::out_of_range);
    EXPECT_THROW(providedSolutions::uniquePaths_naive(31,1), std::out_of_range);
    EXPECT_THROW(providedSolutions::uniquePaths_naive(1,31), std::out_of_range);


    EXPECT_EQ(providedSolutions::uniquePaths_naive(3,2),3);
    EXPECT_EQ(providedSolutions::uniquePaths_naive(3,7),28);
    EXPECT_EQ(providedSolutions::uniquePaths_naive(5,12),1365);

    if(COMPARABLE_TESTING){
        EXPECT_EQ(providedSolutions::uniquePaths_naive(22,9),4292145);
        EXPECT_EQ(providedSolutions::uniquePaths_naive(17,17),601080390);

        //testing for long 
        EXPECT_EQ(providedSolutions::uniquePaths_naive(23,16),9364199760);
        EXPECT_EQ(providedSolutions::uniquePaths_naive(30,30),30067266499541040);
    }
}


TEST (providedSolutions, longestPalindromicSubstring_iter){

    //test edgecases
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_iter(""),"");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_iter("a"),"a");

    //uneven and even results
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_iter("aba"),"aba");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_iter("bbaabb"),"bbaabb");
    //somthing in front
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_iter("caba"),"aba");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_iter("cbbaabb"),"bbaabb");
    //somthing at the end
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_iter("abac"),"aba");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_iter("bbaabbc"),"bbaabb");

    //longer strings
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_iter("aostcto"),"tct");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_iter("meineomafährtimhühnerstallmotorrad"),"oto");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_iter("thisisareallyreallyreallylongishsentencebecauseweshouldalsotestwithverrylongstrings"),"cebec");
}
TEST (providedSolutions, longestPalindromicSubstring_DP){

    //test edgecases
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_DP(""),"");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_DP("a"),"a");

    //uneven and even results
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_DP("aba"),"aba");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_DP("bbaabb"),"bbaabb");
    //somthing in front
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_DP("caba"),"aba");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_DP("cbbaabb"),"bbaabb");
    //somthing at the end
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_DP("abac"),"aba");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_DP("bbaabbc"),"bbaabb");

    //longer strings
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_DP("aostcto"),"tct");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_DP("meineomafährtimhühnerstallmotorrad"),"oto");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_DP("thisisareallyreallyreallylongishsentencebecauseweshouldalsotestwithverrylongstrings"),"cebec");
}
TEST (providedSolutions, longestPalindromicSubstring_naive){

    //test edgecases
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_naive(""),"");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_naive("a"),"a");

    //uneven and even results
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_naive("aba"),"aba");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_naive("bbaabb"),"bbaabb");
    //somthing in front
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_naive("caba"),"aba");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_naive("cbbaabb"),"bbaabb");
    //somthing at the end
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_naive("abac"),"aba");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_naive("bbaabbc"),"bbaabb");

    //longer strings
    if(COMPARABLE_TESTING){
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_naive("aostcto"),"tct");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_naive("meineomafährtimhühnerstallmotorrad"),"oto");
    EXPECT_EQ(providedSolutions::longestPalindromicSubstring_naive("thisisareallyreallyreallylongishsentencebecauseweshouldalsotestwithverrylongstrings"),"cebec");
    }
}