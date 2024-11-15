cmake_minimum_required(VERSION 3.10)
project(DataAnalysis)

# Include dependencies
find_package(nlohmann_json REQUIRED)

# Add source files
add_executable(DataAnalysis
    src/main.cpp
    src/data_parser.cpp
    src/ema_calculator.cpp
    src/logger.cpp
)

# Link libraries
target_include_directories(DataAnalysis PRIVATE ${nlohmann_json_INCLUDE_DIRS})
target_link_libraries(DataAnalysis PRIVATE nlohmann_json::nlohmann_json)
