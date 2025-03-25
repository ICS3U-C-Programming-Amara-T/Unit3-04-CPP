// Copyright (c) 2025 Amara Tie All rights reserved.
//
// Created by: Amara Tie
// Date: March 25, 2025
// In this code the user will guess the number

#include <iostream>

int main() {
    // Declare variables
    float userGuess;

    // Enter the user's guess
    std::cout << "Enter a positive or negative number: ";
    std::cin >> userGuess;
    std::cout << "" << std::endl;

    // Check if the user's guess is correct
    if (userGuess == 0) {
        std::cout << "The number " << userGuess << " is zero!";
    } else if (userGuess > 0) {
        std::cout << "The number " << userGuess << " is positive!";
    } else if (userGuess < 0) {
        std::cout << "The number " << userGuess << " is negative!";
    }
}
