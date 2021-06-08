// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on June 8, 2021
// Generates 10 random numbers and determines the largest

#include <iostream>
#include <random>
#include <iomanip>
#include <array>

int largest_number(std::array<int, 10> numbers) {
    int maximum = numbers[0];
    for (int number : numbers) {
        if (number < maximum) {
            maximum = number;
        }
    }
    return maximum;
}

main() {
    int random_number, largest_num;
    double average, total_sum, length_of_array;
    std::array<int, 10> random_numbers;
    std::cout << "Your random numbers are: ";
    length_of_array = sizeof(random_numbers)/sizeof(random_numbers[0]);
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        random_number = idist(rgen);
        random_numbers[loop_counter] = random_number;
        std::cout << random_numbers[loop_counter] << " ";
        total_sum = total_sum + random_number;
    }
    largest_number(random_numbers);
    largest_num = largest_number(random_numbers);
    std::cout << "\nThe smallest number is: " << largest_num;
    std::cout << "\nDone.";
}
