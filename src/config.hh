#pragma once

/*--------------------------------------------------------------------------------
    Set COMPARABLE_TESTING to true in order to activate the full test on naive 
    implementations.
    NOTE: This will greatly increase runtime of the affected tests.
----------------------------------------------------------------------------------*/
    #define COMPARABLE_TESTING 0

/*--------------------------------------------------------------------------------
    In order to activate testing for an added function set the respective macro to 1
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