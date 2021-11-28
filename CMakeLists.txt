# CMake basic setup.
cmake_minimum_required(VERSION 3.5)
project(MyMathExample VERSION 1.0.0 LANGUAGES CXX)

# Build shared gtest library.
if (NOT BUILD_SHARED_LIBS)
    set(BUILD_SHARED_LIBS ON)
endif()

# Linker flag to search for libMyMath in executable path.
SET(CMAKE_EXE_LINKER_FLAGS 
    "${CMAKE_EXE_LINKER_FLAGS} -Wl,-rpath -Wl,."
)

# C++ 17 standart required.
set(CMAKE_CXX_STANDARD 17)

# Add subdirectories to the build.
add_subdirectory(myMath)
add_subdirectory(googletest)

# Add 'main' source to the main executable.
add_executable(${CMAKE_PROJECT_NAME}
    main.cpp
)

# Link MyMath lib to the executable.
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE
    MyMath
)

# Before create "main" build target "Run_MyMathTests".
add_dependencies(${CMAKE_PROJECT_NAME} Run_MyMathTests)

# Deploy project.
if (DEPLOY)
    add_custom_command(TARGET ${CMAKE_PROJECT_NAME} POST_BUILD
        COMMAND "${CMAKE_SOURCE_DIR}/scripts/deploy.sh"
            "${CMAKE_SOURCE_DIR}/build/MyMathExample"           # Executable path.
            "${CMAKE_SOURCE_DIR}/build/MyMath/libMyMath.so"     # Library path.
            "${CMAKE_SOURCE_DIR}/deploy"                        # Destination path.
        COMMENT "Running deploy"
    )
endif()
