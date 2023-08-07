cmake_minimum_required(VERSION 3.25)
project(Projects)

set(CMAKE_CXX_STANDARD 17)

add_executable(ATM Basic/ATM/main.cpp Basic/ATM/ATM.h Basic/ATM/ATM.cpp)
add_executable(Login Basic/Login/main.cpp Basic/Login/User.h Basic/Login/User.cpp Basic/Login/UserManagement.h Basic/Login/UserManagement.cpp)
