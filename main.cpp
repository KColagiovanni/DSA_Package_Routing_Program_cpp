#include <iostream>
#include <algorithm>
#include "parsePackageData.h"

int main(){

    std::cout << "\n\n           ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    std::cout << "           +                                                                        +" << std::endl;
    std::cout << "           +   ++     ++  ++++++++++    +++++    ++      ++  +++++++      +++++     +" << std::endl;
    std::cout << "           +   ++   ++    ++          ++     ++  ++      ++  ++     ++  ++     ++   +" << std::endl;
    std::cout << "           +   ++  ++     ++          ++         ++      ++  ++     ++  ++          +" << std::endl;
    std::cout << "           +   ++++       ++++++++    ++         ++      ++  ++     ++     ++++     +" << std::endl;
    std::cout << "           +   ++ ++      ++          ++         ++      ++  +++++++           ++   +" << std::endl;
    std::cout << "           +   ++   ++    ++          ++     ++   ++    ++   ++         ++     ++   +" << std::endl;
    std::cout << "           +   ++     ++  ++            +++++       ++++     ++           +++++     +" << std::endl;
    std::cout << "           +                                                                        +" << std::endl;
    std::cout << "           ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n" << std::endl;
    
    std::cout << "<><><><><><><><><><><><><><><><><><><><> Main Menu <><><><><><><><><><><><><><><><><><><><>" << std::endl;
    std::cout << "\nSelect one of the below options: " << std::endl;
    std::cout << "     Press 1 to display package info and status' for all packages at a specified time." << std::endl;
    std::cout << "     Press 2 to display package info and status for a specific package at a specific time." << std::endl;
    std::cout << "     Type 'quit' at any time to quit the program." << std::endl;
    
    std::string user_input;
    int whileCount = 0;
    while (whileCount < 1){
        std::cout << "\nSelection: ";
        std::cin >> user_input;
        std::transform(user_input.begin(), user_input.end(), user_input.begin(), ::tolower);
    
        if (user_input == "1") {
            std::cout << "user wants to display package info status for all packages" << std::endl;
            whileCount++;
        } else if (user_input == "2") {
            std::cout << "user wants to display package info status for a specific package" << std::endl;
            whileCount++;
        } else if (user_input == "quit") {
            std::cout << "Quiting the program" << std::endl;
            return 0;
        } else {
            std::cout << "Invalid entry! Please Try again" << std::endl;
        }
    }

    return 0;
}
