FILE(GLOB SereneSource *.cpp)
add_library(fascode_utils_libcpp
  SHARED
    ${SereneSource}
  ) 
