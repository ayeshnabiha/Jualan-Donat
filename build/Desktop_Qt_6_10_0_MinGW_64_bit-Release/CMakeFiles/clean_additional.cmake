# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\Progdas-Final-Project_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Progdas-Final-Project_autogen.dir\\ParseCache.txt"
  "Progdas-Final-Project_autogen"
  )
endif()
