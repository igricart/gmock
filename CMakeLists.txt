cmake_minimum_required(VERSION 3.0.0)

project (Test_GMock)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
MESSAGE(${CMAKE_MODULE_PATH})

# googletest
enable_testing()
find_package(GTest REQUIRED)
find_package(GMock REQUIRED)

# Executable
add_executable (myClass
src/main.cpp
src/myClass.cpp
src/myClass.hpp
)

# include
include_directories(${GTEST_INCLUDE_DIRS} src)

# target_include_directories(myClass PUBLIC
#   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/in>
#   $<INSTALL_INTERFACE:include/mylib>  # <prefix>/include/mylib
# )

message(STATUS ${GTEST_BOTH_LIBRARIES})
message(STATUS ${GMOCK_BOTH_LIBRARIES})

target_link_libraries (myClass ${GTEST_BOTH_LIBRARIES} ${GMOCK_BOTH_LIBRARIES} pthread)
#add_subdirectory (tests)