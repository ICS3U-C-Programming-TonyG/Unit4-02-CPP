// Copyright (c) Year Tony G All rights reserved.

// Created by Tony G

// Date: 2025-04-26

// Description: Calculates the factorial of the user input

#include <iostream>
#include <string>

int main() {
    // This program calculates the factorial of a number using a do-while loop

    std::string userInput;
    int userNumber;
    int loopCounter = 0;
    int factorialAnswer = 1;

    // Input
    std::cout << "Enter a positive number: ";
    std::cin >> userInput;

    // Process & Output
    try {
        // Convert input to an integer
        userNumber = std::stoi(userInput);

        // Check if the input is valid
        if (userNumber < 0) {
            std::cout << "Please enter a non-negative whole number."
            << std::endl;
        }

        // Calculate factorial using a do-while loop
        do {
            loopCounter += 1;
            factorialAnswer *= loopCounter;
            std::cout << "Tracking " << loopCounter << " times through loop."
            << std::endl;
        } while (loopCounter < userNumber);

        std::cout << std::endl;
        std::cout << userNumber << "! = " << factorialAnswer << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer." << std::endl;
    }
}
