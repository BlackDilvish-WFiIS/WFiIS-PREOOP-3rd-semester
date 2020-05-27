project(series)

INCLUDE_DIRECTORIES(include)
file(GLOB SRC src/*.cpp Main.cpp)

add_executable(run ${SRC})

