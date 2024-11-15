#include <iostream>
#include <vector>
#include "ema_calculator.h"

void calculate_ema(const std::vector<double>& prices, double alpha) {
    std::cout << "Calculating EMA with alpha = " << alpha << "...\n";
    if (prices.empty()) {
        std::cerr << "Error: Price data is empty!\n";
        return;
    }

    double ema = prices[0]; // Start EMA with the first price
    for (size_t i = 1; i < prices.size(); ++i) {
        ema = alpha * prices[i] + (1 - alpha) * ema;
        std::cout << "EMA after price " << prices[i] << ": " << ema << "\n";
    }
}


