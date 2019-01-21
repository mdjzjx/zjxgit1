cmake_minimum_required(VERSION 2.8)
SET(CMAKE_BUILD_TYPE "Debug") 
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb") 
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

set(CODE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/..")
include_directories(
"${CODE_DIR}/inc"
"${CODE_DIR}/tools/include"
)

FILE(GLOB_RECURSE all_files
	${CODE_DIR}/main.cpp
	${CODE_DIR}/src/*.cpp
)

link_directories(
"${CODE_DIR}/tools/lib"
)

add_executable(app ${all_files})
target_link_libraries(app gtest gtest_main pthread)