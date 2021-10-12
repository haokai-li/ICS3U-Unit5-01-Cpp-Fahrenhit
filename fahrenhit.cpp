// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Oct 2021
// This Program is about fahrenheit
#include <iostream>
#include <string>

void calculateFahrenheit() {
    // This Program is about fahrenheit
    std::string celiusString;
    float celiusNumber;

    float fahrenheitNumber;

    std::cout << "Please enter a temperature (°C): ";
    std::cin >> celiusString;
    std::cout << "" << std::endl;

    // process
    try {
        celiusNumber = std::stof(celiusString);

        fahrenheitNumber = (9.0 / 5.0) * celiusNumber + 32;
        // output
        std::cout << celiusNumber << "°C is equal to "
        << fahrenheitNumber << "°F." << std::endl;
    } catch (std::invalid_argument) {
        // output
        std::cout << "You didn't enter an integer." << std::endl;
        std::cout << "" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}

main() {
    calculateFahrenheit();
}
