cmake_minimum_required(VERSION 3.14)
project(Code)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
	tests
	test_mySolutions.cc
	test_additionalSolutions.cc
)

target_link_libraries(
	tests
	GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(tests)
