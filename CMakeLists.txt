cmake_minimum_required(VERSION 3.4)
project(tdd_task)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Testing support
include(CTest)
enable_testing()
add_subdirectory(googletest)

# Roman numeral library
add_library(roman roman.c roman.h)


# Test
if (BUILD_TESTING)
    include_directories(googletest/googletest/include)
    add_executable(roman_test test/roman_test.cc)
    target_link_libraries(roman_test roman gmock_main)
    add_test(roman_test roman_test)
endif ()