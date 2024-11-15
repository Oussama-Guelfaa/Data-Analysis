# Data-Analysis Project

This project is a Data Analysis Module built in C++ for analyzing trading data and calculating Exponential Moving Averages (EMA). The module reads trading data from XML files, performs calculations, and saves results to a CSV file for easy access and visualization.

## Features

- **XML Parsing**: Parses XML files containing trading data, including timestamps and prices for multiple trading pairs.
- **EMA Calculation**: Calculates Exponential Moving Averages (EMA) for each trading pair to track trends in price data.
- **Logging**: Provides detailed logging with timestamps and log levels to track the module's operations.
- **Data Output**: Saves processed data with EMA values to a CSV file for further analysis or visualization.

## Installation

### Clone the Repository

```bash
git clone https://github.com/yourusername/Data-Analysis.git
cd Data-Analysis

### Build Automation

This project utilizes **CMake** as the build tool to automate various tasks:

- **Dependency Management**: Managed via `CMakeLists.txt` for all dependencies, including TinyXML2.
- **Compilation**: All source files are compiled as part of the build process.
- **Project Version Management**: Handled through CMake versioning.
- **Packaging**: Executable files are generated as output, and results are saved to CSV for analysis.

## Project Structure
Data-Analysis/
├── data/
│   ├── eur_usd_data.xml       # Sample XML file with trading data
│   ├── ema_results.csv        # CSV file where EMA results are saved
├── src/
│   ├── data_parser.cpp        # Handles XML parsing and data extraction
│   ├── data_parser.h          # Header file for data parsing
│   ├── ema_calculator.cpp     # Calculates EMA values for trading pairs
│   ├── ema_calculator.h       # Header file for EMA calculator
│   ├── logger.cpp             # Logs information with timestamps and levels
│   ├── logger.h               # Header file for logger
│   ├── main.cpp               # Entry point for the module
├── CMakeLists.txt             # CMake configuration file for building the project
└── README.md                  # Project documentation

## Requirements

- **C++17** or higher
- **TinyXML2** for XML parsing
- **CMake** for building the project
- **GCC** or **Clang** compiler (or any compatible C++ compiler)
## Contributing

If you would like to contribute to this project:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-name`).
3. Commit your changes (`git commit -m "Add some feature"`).
4. Push to the branch (`git push origin feature-name`).
5. Open a pull request.