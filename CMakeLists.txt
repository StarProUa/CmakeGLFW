cmake_minimum_required(VERSION 3.5)

project(CmakeGLFW LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(external/GLFW)

find_package(OpenGL REQUIRED)

include_directories(${OPENGL_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARIES} glfw)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static")

include(GNUInstallDirs)
