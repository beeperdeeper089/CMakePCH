# CMake Precompiled Headers

This cmake tool allows you to easily use Precompiled Headers for C++ projects. It's a simple solution to an annoyingly complicated problem
but it works, but only currently for MSVC.

More compilers will be added in time.

Currently, only MSVC is supported, but I'm adding compilers & testing as time goes.

## Usage:
```
cmake_minimum_required(VERSION 3.0)

project(CMakePCHTest)

include(CMakePCH)

add_library/executable(targetName sources/headers precompiled.hpp precompiled.cpp)
add_precompiled_header(targetName precompiled.hpp precompiled.cpp)
```