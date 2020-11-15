FILE(GLOB SereneSource *.cpp)
add_library(fascode_utils_libcpp
  SHARED
    ${SereneSource}
  ) 
add_library(fascode_utils_libcpp_STATIC
  STATIC
    ${SereneSource}
  ) 
set_target_properties(fascode_utils_libcpp PROPERTIES OUTPUT_NAME fascodeutilscpp)