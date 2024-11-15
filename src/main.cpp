#include <iostream>
#include "data_parser.h"
#include "ema_calculator.h"
#include "logger.h"

int main() {
    std::cout << "Data Analysis Module: Starting...\n";

    log("Loading data...");
    parse_xml("data/eur_usd_data.xml"); // Parses the enhanced XML structure

    log("Performing EMA calculations...");
    calculate_ema({1.1, 1.2, 1.3, 1.4, 1.5}, 0.5); // Example data

    log("Saving results...");
    save_to_json("data/output.json", "result", "success"); // Saves a simple result

    log("Data Analysis Module: Finished.");
    return 0;
}


