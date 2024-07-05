// To compile in linux "g++ main.cpp && ./a.out"

#include <iostream>
#include <algorithm>
#include <vector>
#include "parsePackageData.h"
// #include "hashTable.h"

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
    std::cout << "     Press 3 to display package info for a specified package ID.\n";
    std::cout << "     Press 4 to display all package info.\n";
    std::cout << "     Press 5 to display all distance name info.\n";
    std::cout << "     Press 6 to display all distance info.\n";
    std::cout << "     Press 7 create a table.\n";
    std::cout << "     Type 'quit' at any time to quit the program.\n";
    
    std::string user_input;

    while (1){
        std::cout << "\nSelection: ";
        std::cin >> user_input;
        std::transform(user_input.begin(), user_input.end(), user_input.begin(), ::tolower);
    
        if (user_input == "1") {
            std::cout << "Displaying package info status for all packages\n";
            break;
        } else if (user_input == "2") {
            std::cout << "Displaying package info status for a specific package\n";
            break;
        } else if (user_input == "3") {
            std::string packageNumToDisplay;
            std::cout << "What is the package ID of the package to be displayed?: ";
            std::cin >> packageNumToDisplay;
            Packages pak;
            HashTableClass ht;
            pak.addPackageDataToHashTable();
            // if (stoi(packageNumToDisplay) > 0 and stoi(packageNumToDisplay) <= ht.CAPACITY) {
            //     std::cout << "In the for loop" << std::endl;
            //     std::vector<std::string> record = ht.lookupItem(stoi(packageNumToDisplay));
            //     std::cout << "record.size() is: " << record.size() << std::endl;
            //     for (int i = 0; i < record.size(); i++) {
            //         std::cout << "i is: " << i << std::endl;
            //         if (i < 7){
            //             std::cout << record[i] << ", ";
            //         } else {
            //             std::cout << record[i] << std::endl;
            //         }
            //     }
            // }
            break;
        } else if (user_input == "4") {
            std::cout << "Displaying all package info\n";
            Packages pak;

            pak.addPackageDataToHashTable();
            // for (int i = 0; i < output.size(); i++){
			// 	std::cout << "----------------------------------------------------------------------------------------------------------\n";
            //     for (int j = 0; j < 8; j++){
            //         if (j < 7){
            //             std::cout << output[i][j] << ", ";
            //         } else {
            //             std::cout << output[i][j] << std::endl;
            //         }
            //     }
            //     // std::cout << "\n";
            // }
            break;
        } else if (user_input == "5") {
            std::cout << "Displaying all distance name info\n";
            ParseCsvData pcd;
            std::vector<std::vector<std::string>> output = pcd.getDistanceDataFromCsvFile();
            for (int i = 0; i < output.size(); i++){
				std::cout << "-----------------------------------------------------------------------\n";
                for (int j = 0; j < 3; j++){
                    if (j < 2){
                        std::cout << output[i][j] << ", ";
                    } else {
                        std::cout << output[i][j] << std::endl;
                    }
                }
                std::cout << "\n";
            }
            break;
        } else if (user_input == "6") {
            std::cout << "Displaying all distance info\n";
            ParseCsvData pcd;
            std::vector<std::vector<std::string>> output = pcd.getDistanceDataFromCsvFile();
            for (int i = 0; i < output.size(); i++){
                for (int j = 3; j < output[i].size(); j++){
                    if (j < output[i].size() - 1){
                        std::cout << output[i][j] << ", ";
                    } else {
                        std::cout << output[i][j] << std::endl;
                    }
                }
                std::cout << "\n";
            }
            break;
        } else if (user_input == "7") {
            HashTableClass ht;
            ht.create_table(ht.CAPACITY);
            std::cout << "A table os size: " << ht.CAPACITY << " has been created" << std::endl;
        } else if (user_input == "quit") {
            std::cout << "Quiting the program\n";
            return 0;
        } else {
            std::cout << "Invalid entry! Please Try again\n";
        }
    }

    return 0;
}
