cmake_minimum_required(VERSION 3.31)
project(Cpp CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB_RECURSE ALL_CPP_FILES
        "Algorithms/*/*.cpp"
        "LeetCode/*/*.cpp"
        "Project Euler/Problem */*.cpp"
        "CodeForces/Round */Problem */*.cpp"
        "Awesome Cpp Projects/*/*.cpp"
)

foreach(SRC ${ALL_CPP_FILES})
    # Get the full filename with extension, then manually remove .cpp
    get_filename_component(FULL_NAME ${SRC} NAME)

    # Remove the .cpp extension manually to preserve the full name
    string(REGEX REPLACE "\\.cpp$" "" FILE_NAME "${FULL_NAME}")

    # Now FILE_NAME will be "15. Lattice Paths" instead of just "15"
    set(TARGET_NAME "${FILE_NAME}")

    # Clean up for valid CMake target names
    string(REPLACE " " "_" TARGET_NAME "${TARGET_NAME}")
    string(REPLACE "." "_" TARGET_NAME "${TARGET_NAME}")
    string(REPLACE "(" "_" TARGET_NAME "${TARGET_NAME}")
    string(REPLACE ")" "_" TARGET_NAME "${TARGET_NAME}")
    string(REPLACE "," "_" TARGET_NAME "${TARGET_NAME}")
    string(REPLACE "+" "plus" TARGET_NAME "${TARGET_NAME}")
    string(REPLACE "-" "_" TARGET_NAME "${TARGET_NAME}")
    string(REPLACE "^" "_power_" TARGET_NAME "${TARGET_NAME}")
    string(REGEX REPLACE "_+" "_" TARGET_NAME "${TARGET_NAME}")
    string(REGEX REPLACE "^_+|_+$" "" TARGET_NAME "${TARGET_NAME}")

    add_executable(${TARGET_NAME} ${SRC})
endforeach()