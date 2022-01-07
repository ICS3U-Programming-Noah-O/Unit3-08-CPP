// Copyright (c) 2021 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Dec. 16, 2021
// This program allows a user to determine
// if a certain year is a leap year
#include <unistd.h>
#include <iostream>
#include <iomanip>



int main() {
    std::string userYear;
    int userYearInt;
    // Asks questions and gets user input
    std::cout << "This program determines if a chosen year is a leap year.\n";
    std::cout << " \n";
    sleep(1);
    std::cout << "Enter your year: ";
    std::cin >> userYear;
    std::cout << " \n";
    sleep(1);

    try {
        // Make sure user input is an integer
        userYearInt = std::stoi(userYear);

        // Calculate if the chosen year is a leap year
        if (userYearInt <= 0) {
            std::cout << "Please enter a positive number.\n";
        } else {
            if (userYearInt % 4 ==0) {
                if (userYearInt % 100 ==0) {
                    if (userYearInt % 400 == 0) {
                        std::cout << userYearInt << " is a leap year!\n";
                    } else {
                        std::cout << userYear << " is not a leap year.\n";
                    }
                } else {
                    std::cout << userYearInt << " is a leap year!\n";
                }
            } else {
                std::cout << userYearInt << " is not a leap year.\n";
            }
        }
        } catch (std::invalid_argument) {
            std::cout << userYear << " is not a number\n";
        }
}
