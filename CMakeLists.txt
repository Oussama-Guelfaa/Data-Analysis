cmake_minimum_required(VERSION 3.10)
project(Data-Analysis)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories manually
include_directories(
    ${CMAKE_SOURCE_DIR}/src    # Add the src directory for headers
)

# Add source files
add_executable(Data-Analysis
    src/main.cpp
    src/data_parser.cpp
    src/ema_calculator.cpp
    src/logger.cpp
)
