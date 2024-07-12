# IAP: Coding for Interviews
Coding challenges for my beginners practical including a framework to test ones own implementations.

## Installation
To install this framework follow the standard procedure:
```
mkdir build
cd build
cmake ..
make
./test_solutions
```
The framework requires `gtest`, [googles testing library](https://github.com/google/googletest) for C++ to work. CMake will automatically install the library if it is not found on your system.  

I recommend running the commands above first thing to confirm the correct installation.  
The last command runs the tests. Out of the box all tests should pass.  

## Usage
After installation you can add your own implementations in the `yourSolutions.cc` file.  
From the `build` directory you can then run all tests them using:
````
make
./test_solutions
````
This runs all tests. 

### Compare Runtime
For tests of naive implementations long inputs are excluded from the test by default. If you want to compare also the runtime of the naive implementions set `COMPARABLE_TESTING = true` in the `test_Solutions.cc` file.  
NOTE: Testing will take very long after enabeling this.
