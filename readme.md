# CI/CD and Unit Testing Exercise Session

## Getting Started
1. **Git, the simple guide:** https://rogerdudler.github.io/git-guide/
2. **Google Test Primer:** https://google.github.io/googletest/primer.html
3. **A selected list of useful actions:** https://github.com/sdras/awesome-actions

### Prerequisites
Ensure you have the following installed:
- C++ compiler (e.g., g++, clang++)
- CMake (https://cmake.org/download/)
- Git (osx https://git-scm.com/download/mac) (windows: https://gitforwindows.org/) (linux: https://git-scm.com/book/en/v2/Getting-Started-Installing-Git)
- Human Brain

### Setup Instructions

1. **Use the template:**
```sh
https://github.com/SimoneReale/handson_ci_test
cd your-repo-name
```
   
3. **Build the project:**
```sh
mkdir build
cd build
cmake ..
cmake --build .
```
3. **Test (in the build folder):**

```sh
ctest
```
or:
```sh
./tests
```




