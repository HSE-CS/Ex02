cmake_minimum_required(VERSION 2.8)
# Make PROJECT_SOURCE_DIR, PROJECT_BINARY_DIR, and PROJECT_NAME available.
set(PROJECT_NAME task1)
project(${PROJECT_NAME})
set(CMAKE_CXX_FLAGS "-g -Wall")
# If you want your own include/ directory, set this, and then you can do
# include_directories(${COMMON_INCLUDES}) in other CMakeLists.txt files.
#----------------------------------------------------------------------------
# Define project sources and includes
#----------------------------------------------------------------------------
set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)
include_directories(${COMMON_INCLUDES})
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/test/*.cpp)


set(SRC_FILES1 ${PROJECT_SOURCE_DIR}/src/task1.cpp)
set(SRC_FILES1 ${PROJECT_SOURCE_DIR}/src/task1.cpp src/main1.cpp src/task1.cpp include/task1.h)

set(CMAKE_CXX_STANDARD 11)
add_library(task1_lib ${SRC_FILES1})
add_executable(task1 ${PROJECT_SOURCE_DIR}/src/main1.cpp)
target_link_libraries(task1 task1_lib)
################################
# Testing
################################
# Options. Turn on with 'cmake -Dmyvarname=ON'.
option(BUILD_TESTS "Build all tests." OFF) # Makes boolean 'test' available.
if (BUILD_TESTS)
  # This adds another subdirectory, which has 'project(gtest)'.
  add_subdirectory(ext/gtest-1.8.0)
  enable_testing()