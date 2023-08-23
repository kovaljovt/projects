cmake_minimum_required(VERSION 3.26)
project(Face_Tracking)

find_package(PkgConfig REQUIRED)
pkg_check_modules(OPENCV REQUIRED opencv4)

set(CMAKE_CXX_STANDARD 17)

function(add_chapter TARGET_NAME SOURCE_FILE)
    add_executable(${TARGET_NAME} ${SOURCE_FILE})
    target_include_directories(${TARGET_NAME}
            PUBLIC
            ${CMAKE_CURRENT_LIST_DIR}
            ${OPENCV_INCLUDE_DIRS}
    )
    target_link_libraries(${TARGET_NAME}
            PUBLIC
            ${OPENCV_LIBRARIES}
    )
endfunction()

add_chapter(face-tracking FaceTracking.cpp)