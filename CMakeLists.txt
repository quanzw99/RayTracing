cmake_minimum_required ( VERSION 3.1.0 )

project ( RayTracing
  LANGUAGES CXX
)

set ( CMAKE_CXX_STANDARD 11 )

include_directories(src/common)

set ( SOURCE_ONE_WEEKEND
  src/inOneWeekend/main.cc
)

# Executables
add_executable(inOneWeekend      ${SOURCE_ONE_WEEKEND})