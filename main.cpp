#include <iostream>
#include <algorithm>
#include <vector>
#include "parsePackageData.h"
#include "hashTable.h"

int main(){

    std::cout << "\n\n           ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    std::cout << "           +                                                                        +\n";
    std::cout << "           +   ++     ++  ++++++++++    +++++    ++      ++  +++++++      +++++     +\n";
    std::cout << "           +   ++   ++    ++          ++     ++  ++      ++  ++     ++  ++     ++   +\n";
    std::cout << "           +   ++  ++     ++          ++         ++      ++  ++     ++  ++          +\n";
    std::cout << "           +   ++++       ++++++++    ++         ++      ++  ++     ++     ++++     +\n";
    std::cout << "           +   ++ ++      ++          ++         ++      ++  +++++++           ++   +\n";
    std::cout << "           +   ++   ++    ++          ++     ++   ++    ++   ++         ++     ++   +\n";
    std::cout << "           +   ++     ++  ++            +++++       ++++     ++           +++++     +\n";
    std::cout << "           +                                                                        +\n";
    std::cout << "           ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
    
    std::cout << "<><><><><><><><><><><><><><><><><><><><> Main Menu <><><><><><><><><><><><><><><><><><><><>\n";
    std::cout << "\nSelect one of the below options: \n";
    std::cout << "     Press 1 to display package info and status' for all packages at a specified time.\n";
    std::cout << "     Press 2 to display package info and status for a specific package at a specific time.\n";
    std::cout << "     Press 3 to display all package info.\n";
    std::cout << "     Press 3 to display all distance info.\n";
    std::cout << "     Type 'quit' at any time to quit the program.\n";
    
    std::string user_input;

    while (1){
        std::cout << "\nSelection: ";
        std::cin >> user_input;
        std::transform(user_input.begin(), user_input.end(), user_input.begin(), ::tolower);
    
        if (user_input == "1") {
            std::cout << "user wants to display package info status for all packages\n";
            break;
        } else if (user_input == "2") {
            std::cout << "user wants to display package info status for a specific package\n";
            break;
        } else if (user_input == "3") {
            std::cout << "user wants to display all package info\n";
            ParseCsvData pcd;
            std::vector<std::string> output = pcd.getPackageData();
            for (int i = 0; i < output.size(); i++){
                std::cout << output[i] << std::endl;
            }
            break;
        } else if (user_input == "4") {
            std::cout << "user wants to display all distance info\n";
            ParseCsvData pcd;
            std::vector<std::string> output = pcd.getDistanceData();
            for (int i = 0; i < output.size(); i++){
                std::cout << output[i] << std::endl;
            }
            break;
        } else if (user_input == "quit") {
            std::cout << "Quiting the program\n";
            return 0;
        } else {
            std::cout << "Invalid entry! Please Try again\n";
        }
    }

    return 0;
}
