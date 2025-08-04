#cmake_minimum_required(VERSION 3.31)
#project(Cpp)
#
#set(CMAKE_CXX_STANDARD 14)
#
#add_executable(ProjectEuler_1 "Project Euler/Problem 1/1. Multiples of 3 or 5.cpp")
#
#add_executable(ProjectEuler_2 "Project Euler/Problem 2/2. Even Fibonacci Numbers.cpp")

cmake_minimum_required(VERSION 3.31)
project(Cpp)

set(CMAKE_CXX_STANDARD 14)

# Recursively find all .cpp files (only the main.cpp-like solutions)
file(GLOB_RECURSE ALL_CPP_FILES
        "Project Euler/Problem */*.cpp"
        "LeetCode/Problem */*.cpp"
        "CodeForces/Round */Problem */*.cpp"
        "Awesome Cpp Projects/*/*.cpp"
)
add_executable(TestPrimeFactor "Project Euler/Problem 03/3. Largest Prime Factor.cpp")

foreach(SRC ${ALL_CPP_FILES})
    # Get path like "Project Euler/Problem 1/1. Multiples of 3 or 5.cpp"
    get_filename_component(FILE_NAME ${SRC} NAME_WE)        # e.g., "1. Multiples of 3 or 5"
    get_filename_component(DIR_PATH ${SRC} DIRECTORY)       # e.g., "Project Euler/Problem 1"
    string(REPLACE "/" "_" TARGET_NAME "${DIR_PATH}_${FILE_NAME}") # e.g., Project_Euler_Problem_1_1._Multiples_of_3_or_5

    # Replace spaces and dots (not allowed in CMake target names)
    string(REPLACE " " "_" TARGET_NAME ${TARGET_NAME})
    string(REPLACE "." "_" TARGET_NAME ${TARGET_NAME})

    # Add the executable
    add_executable(${TARGET_NAME} ${SRC})
endforeach()
