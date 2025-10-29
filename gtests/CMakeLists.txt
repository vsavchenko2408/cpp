cmake_minimum_required(VERSION 3.5)
target_link_libraries(your_test_target GTest::gtest_main)
add_executable( gtest main.cpp)