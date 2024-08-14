# IAP: Coding for Interviews
Coding challenges for my beginners practical including a framework to test ones own implementations.

## Installation
To install this framework you can simply run the `build.sh` skript.  
The `build.sh` also runs the tests. Out of the box all tests should pass.  

After the first build, you can use the `rebuild.sh`script which deletes the previous build before calling `build.sh`.

### Third party Libraries
The framework uses `gtest`, [googles testing library for C++](https://github.com/google/googletest).  
No installation is needed, download and installation is handled by CMake.

## Usage
To add your own implementation follow these steps:  
1. Implement your functionality using the provided declaration in `src/additionalSolutions/additional-NameOfProblem.cc`.  
2. Enable the corresponding testing variable in `src/config.hh`.
3. If you wish to run the exact same tests on the different versions of the problems enable `COMPARABLE_TESTING`.  
4. From the build directory recompile the tests using:
    ````
    make
    ./tests
    ````
    This runs all tests.

NOTE: Enabeling `COMPARABLE_TESTING` will lead to very long runtimes for test of naive implementations.

## Coding Problems
This framework comes with 4 Coding problems:
1. **Fibonacci Numbers**
    Where the goal is to compute the n-th fibonacci number.  
    Constraints: `0 <= n <= 88`
2. **Climbing Stairs**
    Where the goal is to return the number of possible ways to climb `n` stairs if one can either take one or two steps at a time.  
    Constraints: `0 <= n <= 87`
3. **Unique Paths**
    Where the goal is to return the number of possible ways to get from one corner of a rectangular grid to the opposite one.  
    Constraints: `1 <= n,m <= 30`
4. **Longest Palindromic Substring**
    Where the goal is to return the longest palindromic substring of a given input string.  
    Constraints: `0 <= n <= 1000` for n being the size of s. If there exists multiple palindromic substrings with maximum size any is correct.


### My Implementations
My own implementations can be found in the `providedSolutions` directory.  