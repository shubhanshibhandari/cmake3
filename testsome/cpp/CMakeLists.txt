cmake_minimum_required(VERSION 3.13)
project(testsome)
add_executable(testsome main.cpp)
add_subdirectory(external/glfw)
target_include_directories(${PROJECT_NAME} PUBLIC external/glfw/include)
target_link_directories(${PROJECT_NAME}
    PRIVATE external/glfw/src
)
target_link_libraries(testsome mearlymath glfw)