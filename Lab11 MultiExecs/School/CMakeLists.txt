cmake_minimum_required(VERSION 3.1)
project (school_lib)

#----------------------------------------------------------------------------
set (school_lib_includes ${PROJECT_SOURCE_DIR}/include)
include_directories(${school_lib_includes})
include_directories(${grades_lib_INCLUDE_DIRS})
include_directories(${students_lib_INCLUDE_DIRS})

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

#----------------------------------------------------------------------------
# Build library

add_library(${PROJECT_NAME} STATIC ${SOURCES})

# target_link_libraries(${PROJECT_NAME} ...)
# --> not needded, we do not have any external dependacies for this module

#----------------------------------------------------------------------------
# Expose project's public includes to other subprojects through cache variable
set(${PROJECT_NAME}_INCLUDE_DIRS ${school_lib_includes}
                                 CACHE INTERNAL "${PROJECT_NAME}: Include Directories" FORCE)
