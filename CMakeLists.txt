cmake_minimum_required ( VERSION 3.1.0 )

project ( RayTracingInOneWeekend
  LANGUAGES CXX
)

set ( CMAKE_CXX_STANDARD 11 )

set ( SOURCE_ONE_WEEKEND
  src/main.cc
)

# Executables
add_executable(inOneWeekend      ${SOURCE_ONE_WEEKEND})