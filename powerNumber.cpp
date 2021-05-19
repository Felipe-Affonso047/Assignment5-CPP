// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: May 2021
// This program does power

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

int main() {
    // This function does power
    int base;
    int power;
    float result  = 1;


    try {
        std::cout <<
        "Enter 2 numbers, the second one will" <<
        " be the power of the second one. xʸ"
        << std::endl;
        std::cout << "x: ";
        std::cin >> base;
        std::cout << "y: ";
        std::cin >> power;
        int powerToShow = power;

        if (power > 0) {
            while (power > 0) {
                power = power - 1;
                result = result * base;
            }
        } else {
            while (power < 0) {
                power = power + 1;
                result = result / base;
            }
        }
    std::cout << base << " to the power of " << powerToShow
    << " equal " << result << std::endl;
    } catch (std::invalid_argument) {
        std::cout <<
        "\nThis input is invalid, please, insert an integer."
        << std::endl;
    }

std::cout << "\nDone." << std::endl;
}
