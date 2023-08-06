cmake_minimum_required(VERSION 3.25)
project(Projects)

set(CMAKE_CXX_STANDARD 17)

add_executable(ATM ATM/main.cpp ATM/ATM.h ATM/ATM.cpp)
add_executable(Login Login/main.cpp Login/User.h Login/User.cpp Login/UserManagement.h Login/UserManagement.cpp)
