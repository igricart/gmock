find_package(GMock REQUIRED)

#set (GMOCK_DIR "../thirdparty/googletest")
#add_subdirectory(${GMOCK_DIR})
#include_directories(SYSTEM ${GMOCK_DIR}/googlemock/include ${GMOCK_DIR}/googletest/include)

# Executable
add_executable (tests
    test.cpp)

target_link_libraries (tests gmock)