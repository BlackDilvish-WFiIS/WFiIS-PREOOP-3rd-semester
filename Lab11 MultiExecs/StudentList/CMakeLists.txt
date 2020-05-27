cmake_minimum_required(VERSION 3.1)
project (students_lib)

#----------------------------------------------------------------------------
set (students_lib_includes ${PROJECT_SOURCE_DIR}/include)
include_directories(${students_lib_includes})

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

#----------------------------------------------------------------------------
# Build library

add_library(${PROJECT_NAME} STATIC ${SOURCES})

# target_link_libraries(${PROJECT_NAME} ...) # not needded, we do not have any external dependacies.

#----------------------------------------------------------------------------
# Expose project's public includes to other subprojects through cache variable
set(${PROJECT_NAME}_INCLUDE_DIRS ${students_lib_includes}
                                 CACHE INTERNAL "${PROJECT_NAME}: Include Directories" FORCE)
