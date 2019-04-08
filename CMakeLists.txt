cmake_minimum_required(VERSION 3.0)

project(CMakePCH)

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)

include(CMakePCH)

add_executable(${PROJECT_NAME} test_cxx.hpp test_cxx.cpp precompiled.hpp precompiled.cpp)
add_precompiled_header(${PROJECT_NAME} precompiled.hpp precompiled.cpp)
