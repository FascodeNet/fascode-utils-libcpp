cmake_minimum_required(VERSION 2.8)
project(fascode_utils_libcpp CXX)
set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON) 
add_subdirectory(src)
target_include_directories(fascode_utils_libcpp PRIVATE include/)
target_include_directories(fascode_utils_libcpp_STATIC PRIVATE include/)
add_executable(fascodeutiltest test/main.cpp)
target_include_directories(fascodeutiltest PRIVATE include/)
target_link_libraries(fascodeutiltest fascode_utils_libcpp_STATIC)
install(TARGETS fascode_utils_libcpp
    EXPORT fascode_utils_libcpp-export
    LIBRARY        DESTINATION lib
    INCLUDES       DESTINATION include
    PUBLIC_HEADER  DESTINATION include/libfascodeutilscpp)

install(EXPORT fascode_utils_libcpp-export
    FILE libfascodeutilscpp-config.cmake
    DESTINATION share/cmake/libfascodeutilscpp/
    )
install(TARGETS fascode_utils_libcpp_STATIC
    EXPORT fascode_utils_libcpp_STATIC-export
    LIBRARY        DESTINATION lib
    INCLUDES       DESTINATION include
    PUBLIC_HEADER  DESTINATION include/libfascodeutilscpp_static)

install(EXPORT fascode_utils_libcpp_STATIC-export
    FILE fascode_utils_libcpp_STATICConfig.cmake
    DESTINATION share/cmake/fascode_utils_libcpp_STATIC/
    )
