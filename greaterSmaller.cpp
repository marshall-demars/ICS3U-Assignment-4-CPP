// Copyright (c) 2022 Marshall Demars All rights reserved

// Created by: Marshall Demars
// Created on: Nov 2022
// This program tells the user which input is greater and smaller

#include <iostream>

int main() {
    // This program tells the user which input is greater and smaller

    int integerOneAsInt;
    int integerTwoAsInt;
    std::string integerOneAsString;
    std::string integerTwoAsString;

    // Input
    std::cout << "Enter a positive number: ";
    std::cin >> integerOneAsString;
    std::cout << "Enter a second positive number: ";
    std::cin >> integerTwoAsString;

    // Process and Output
    try {
        integerOneAsInt = std::stoi(integerOneAsString);
        integerTwoAsInt = std::stoi(integerTwoAsString);

        if (integerOneAsInt || integerTwoAsInt < 0) {
            std::cout << "Please only input positive numbers." << std::endl;
        } else if (integerOneAsInt > integerTwoAsInt) {
            std::cout << integerOneAsInt << " is a larger number than "
                      << integerTwoAsInt << "." << std::endl;
        } else if (integerOneAsInt < integerTwoAsInt) {
            std::cout << integerTwoAsInt << " is a larger number than "
                      << integerOneAsInt << "." << std::endl;
        } else {
            std::cout << integerTwoAsInt << " is the same number as "
                      << integerOneAsInt << "." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid input." << std::endl;
    }

    std::cout << ("\nDone.") << std::endl;
}
