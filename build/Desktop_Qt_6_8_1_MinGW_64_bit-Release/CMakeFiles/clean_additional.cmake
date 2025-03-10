# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\HotelManagement_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\HotelManagement_autogen.dir\\ParseCache.txt"
  "HotelManagement_autogen"
  )
endif()
