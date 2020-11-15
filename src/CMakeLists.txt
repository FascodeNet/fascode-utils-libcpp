FILE(GLOB SereneSource *.cpp)
add_library(serenecpp
  SHARED
    ${SereneSource}
  ) 
