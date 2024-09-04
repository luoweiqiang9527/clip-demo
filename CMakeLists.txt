cmake_minimum_required(VERSION 3.28)
project(clip_demo)

set(CMAKE_CXX_STANDARD 17)

# Disable clip examples and tests
set(CLIP_EXAMPLES OFF CACHE BOOL "Compile clip examples")
set(CLIP_TESTS OFF CACHE BOOL "Compile clip tests")

# In case that you have ${PNG_LIBRARY} set to support copy/paste images on Linux
#set(CLIP_X11_PNG_LIBRARY "${PNG_LIBRARY}")

# Add clip subdirectory to compile the library
add_subdirectory(clip)

add_executable(clip_demo main.cpp)
target_link_libraries(clip_demo clip)
