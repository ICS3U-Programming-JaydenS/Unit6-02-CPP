// Copyright (c) 2024 Jayden Smith All rights reserved.
// Created By: Jayden Smith
// Date: May 17, 2025
// This code gives you the max value from 10 nums

#include <array>
#include <cstdlib>
#include <ctime>
#include <iostream>

int max_value_finder(std::array<int, 10> numbers) {
    // Define my variables
    int max_value = 0;

    // Checks which number is the greatest one
    for (int counter2 = 0; counter2 < 10; counter2++) {
        if (max_value < numbers[counter2]) {
            max_value = numbers[counter2];
        } else {
            continue;
        }
    }
    // Returns the one that is the greatest
    return (max_value);
}

int main() {
    // Define my variables
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_VALUE = 0;
    const int MAX_NUM = 100;
    const int RANGE = MAX_NUM - MIN_VALUE;
    int randomNumber;
    std::array<int, MAX_ARRAY_SIZE> arrayOfInt;

    // Initialize seed
    srand((unsigned)time(NULL));

    // Generates the random numbers
    for (int counter = 0; counter < arrayOfInt.size(); counter++) {
        randomNumber = (rand() % RANGE + 1) + MIN_VALUE;
        arrayOfInt[counter] = randomNumber;
        std::cout << counter << " number: " << randomNumber << "\n";
    }
    // Calls the max value finder function
    int max_value = max_value_finder(arrayOfInt);

    // Displays max value
    std::cout << "The max value is " << max_value << "\n";
}
