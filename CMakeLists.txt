cmake_minimum_required(VERSION 2.9)
project(fascode_utils_libcpp CXX)
set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON) 
add_subdirectory(src)
target_include_directories(fascodeutilscpp PRIVATE include/)
add_executable(fascodeutiltest test/main.cpp)
target_include_directories(fascodeutiltest PRIVATE include/)
target_link_libraries(fascodeutiltest fascodeutilscpp)

set_target_properties(fascodeutilscpp PROPERTIES
        PUBLIC_HEADER "include/custom_exec.hpp;include/libfas.hpp;include/message.hpp"
)
install(TARGETS fascodeutilscpp
    EXPORT fascodeutilscpp-export
    LIBRARY        DESTINATION lib  
    INCLUDES       DESTINATION include
    PUBLIC_HEADER  DESTINATION include/libfascodeutilscpp)
install(EXPORT fascodeutilscpp-export
    FILE libfascodeutilscpp-config.cmake
    DESTINATION share/cmake/libfascodeutilscpp/
    )
