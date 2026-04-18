cmake_minimum_required(VERSION 3.10)
project(TempCalcCI)

# 告诉 CMake 我们要生成一个叫 test_app 的可执行文件
add_executable(test_app main.c temp_calc.c)