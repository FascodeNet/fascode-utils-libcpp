FILE(GLOB SereneSource *.cpp)
add_library(fascodeutilscpp
  SHARED
    ${SereneSource}
  )