#----------------------------------------------------------------------------
# Setup the project
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project(LbMulti)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_DEFAULT 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

#----------------------------------------------------------------------------
# prevent for in-source building
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES  ON)
if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
  message(SEND_ERROR "In-source builds are not allowed.")
endif ()

#----------------------------------------------------------------------------
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_COLOR_MAKEFILE   ON)

# The following needs to be done universally to any static library
set(CMAKE_POSITION_INDEPENDENT_CODE ON) 

#----------------------------------------------------------------------------
# Top level option:
option(BUILD_LBSTUDENTS "Build LbStudents" ON)
option(BUILD_LBGRADES "Build LbGrades" ON)

#----------------------------------------------------------------------------
# Configure the components (subprojects)
# NOTE: The order matters! The most independent ones should go first.
#       If A and B really depend on each other, CMake  can build such correctly,
#       if you specify full path to the include directlry

if(BUILD_LBSTUDENTS)
  add_subdirectory(StudentList)
endif(BUILD_LBSTUDENTS)

if(BUILD_LBGRADES)
  add_subdirectory(GradeBook)
endif(BUILD_LBGRADES)

add_subdirectory(School)

add_subdirectory(Executables)

#----------------------------------------------------------------------------
# It always worth to give messages..
message(STATUS "Build LbStudents: " ${BUILD_LBSTUDENTS})
message(STATUS "Build LbGrades: " ${BUILD_LBGRADES})