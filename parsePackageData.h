#include <fstream>
#include <ios>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

class ParseCsvData {

    private:

        const std::string SUBDIRECTORY = "data/";
        const std::string PACKAGE_FILE = "package_file.csv";
        const std::string DISTANCE_TABLE = "distance_table.csv";

    public:

        std::vector<std::string> getPackageData() {

            // Define variables
            std::fstream file;
            std::vector<std::string> record; 
            std::string line;

            // Open the defined file
            file.open(SUBDIRECTORY + PACKAGE_FILE);

            // Read the file line by line
            while (getline(file, line)){
                record.push_back(line);
            }

            // Close the file
            file.close();

            // Return the record vector
            return record;
        } 

        std::vector<std::string> getDistanceData() {

            // Define variables
            std::fstream file;
            std::vector<std::string> record; 
            std::string line;

            // Open the defined file
            file.open(SUBDIRECTORY + DISTANCE_TABLE);

            // Read the file line by line
            while (getline(file, line)){
                record.push_back(line);
            }

            // Close the file
            file.close();

            // Return the record vector
            return record;
        } 

        std::vector<std::string> getDistanceNameData() {

            // Define variables
            std::fstream file;
            std::vector<std::string> record; 
            std::string line;

            // Open the defined file
            file.open(SUBDIRECTORY + DISTANCE_TABLE);

            // Read the file line by line
            while (getline(file, line)){
                record.push_back(line);
            }

            // Close the file
            file.close();

            // Return the record vector
            return record;
        } 

        // std::string line, word, token, delimiter = ",";
        // size_t pos = 0;

        // Method to split csv data in each row.
        // std::vector<std::string> split (const std::string &s, char delim) {
        //     std::vector<std::string> result;
        //     std::stringstream ss (s);
        //     std::string item;

        //     while (getline (ss, item, delim)) {
        //         result.push_back (item);
        //     }

        //     return result;
        // }

            // Get each data item in a row of data.
            // for (int rowNum = 0; rowNum < record.size(); rowNum++){

            //     // std::cout << record[rowNum] << std::endl;

            //     std::vector<std::string> v = split (record[rowNum], ',');
            //     std::cout << "------------------------------\n";

            //     for (auto i : v) std::cout << i << std::endl;
            // }

};