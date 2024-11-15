#include <iostream>
#include <fstream>
#include "data_parser.h"

// Simulate parsing XML (actual parsing would require a library like TinyXML2)
void parse_xml(const std::string& filename) {
    std::cout << "Parsing XML file: " << filename << "\n";

    // Example output simulating parsed data
    std::cout << "Metadata:\n";
    std::cout << "  Source: Forex Market\n";
    std::cout << "  Symbol: EUR/USD\n";
    std::cout << "  Last Updated: 2024-11-15T12:00:00Z\n";

    std::cout << "Prices for EUR/USD:\n";
    std::cout << "  2024-11-14T14:30:00Z: 1.1\n";
    std::cout << "  2024-11-14T14:31:00Z: 1.2\n";
    std::cout << "  2024-11-14T14:32:00Z: 1.3\n";

    std::cout << "Prices for USD/JPY:\n";
    std::cout << "  2024-11-14T14:30:00Z: 145.3\n";
    std::cout << "  2024-11-14T14:31:00Z: 145.4\n";
    std::cout << "  2024-11-14T14:32:00Z: 145.5\n";

    std::cout << "XML Parsing Completed.\n";
}

// Adjust the save_to_json function if needed (optional for this XML change)
void save_to_json(const std::string& filename, const std::string& key, const std::string& value) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Could not write to file " << filename << "\n";
        return;
    }

    // Write a simple JSON-like structure
    file << "{\n";
    file << "  \"" << key << "\": \"" << value << "\"\n";
    file << "}\n";

    std::cout << "Data saved to file: " << filename << "\n";
}
