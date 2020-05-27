cmake_minimum_required(VERSION 3.13)
project(studentLists)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)
file(GLOB SRC src/*.cpp Main.cpp)

set(CMAKE_CXX_FLAGS "-Wall")

add_executable(${PROJECT_NAME} ${SRC})

add_custom_target(valgrind
	COMMAND valgrind ./${PROJECT_NAME}
	DEPENDS ${PROJECT_NAME}
)
