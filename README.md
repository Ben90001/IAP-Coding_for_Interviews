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

I recommend running these commands first thing to confirm the correct installation. The last command runs the tests. Out of the box all tests should pass.

## Usage
After installation you can add your own implementations in the `yourSolutions`.
From the `build` directory you can then run all tests. By using:
````
make
./test_solutions
````
This runs all tests. 

##Compare Runtime
For tests of naive implementations long inputs are excluded from the test by default. If you want to compare also the runtime of the naive implementions set `COMPARABLE_TESTING = true` in `the test_Solutions` file.
NOTE: The testing will take very long after enabeling this.
