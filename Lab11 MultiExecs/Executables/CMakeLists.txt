#----------------------------------------------------------------------------
# Setup the project
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project(execs)

#----------------------------------------------------------------------------
# Setup the compile definitions and includes

#----------------------------------------------------------------------------
if(BUILD_LBGRADES)
  add_definitions(${grades_lib_DEFINITIONS})
  include_directories(${grades_lib_INCLUDE_DIRS})
endif()

#----------------------------------------------------------------------------
if(BUILD_LBSTUDENTS)
  add_definitions(${students_lib_DEFINITIONS})
  include_directories(${students_lib_INCLUDE_DIRS})
endif()

#----------------------------------------------------------------------------
include_directories(${school_lib_INCLUDE_DIRS})

#----------------------------------------------------------------------------
# Define executables

add_executable(run_grades src/grades.cpp)
target_link_libraries(run_grades grades_lib)

add_executable(run_students src/students.cpp)
target_link_libraries(run_students students_lib)

add_executable(run_school src/school.cpp)
target_link_libraries(run_school school_lib)