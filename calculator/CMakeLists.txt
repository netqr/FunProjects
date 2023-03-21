cmake_minimum_required(VERSION 3.25.2)

project(Calculator VERSION 1.0.0)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(include)

target_include_directories(${PROJECT_NAME} PUBLIC include)

target_link_directories(${PROJECT_NAME} PRIVATE include)

target_link_libraries(${PROJECT_NAME} calc)
