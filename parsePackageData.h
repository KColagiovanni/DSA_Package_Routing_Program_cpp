#include <fstream>
#include <ios>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

class ParseCsvData {

    private:

        const std::string SUBDIRECTORY = "data/";
        const std::string PACKAGE_TABLE = "package_file.csv";
        const std::string DISTANCE_TABLE = "distance_table.csv";

        // Method to split csv data in each row.
        std::vector<std::string> split (const std::string &s, char delim) {
            std::vector<std::string> result;
            std::stringstream ss (s);
            std::string item;

            while (getline (ss, item, delim)) {
                result.push_back (item);
            }

            return result;
        }

        std::vector<std::vector<std::string>> convertCsvFileTo2dVector(std::string filename) {

            // Define variables
            std::fstream file;
            std::vector<std::string> record;
			std::vector<std::vector<std::string>> csv_vector;
            std::string line;

            // Open the defined file
            file.open(SUBDIRECTORY + filename);

            // Read the file line by line
            while (getline(file, line)){
                record.push_back(line);
			}

			// Get each data item in a row of data.
			for (int rowNum = 0; rowNum < record.size(); rowNum++){

				std::vector<std::string> row = split (record[rowNum], ',');

                csv_vector.push_back(row);
			}

            // Close the file
            file.close();

            // Return the record vector
            return csv_vector;
        } 

    public:

        std::vector<std::vector<std::string>> getPackageDataFromCsvFile() {

            return convertCsvFileTo2dVector(PACKAGE_TABLE);
            
        }

        std::vector<std::vector<std::string>> getDistanceDataFromCsvFile() {

            return convertCsvFileTo2dVector(DISTANCE_TABLE);
            
        }
};

class Packages : public ParseCsvData {

    public:
        std::vector<std::string> getPackageData() {
            
            ParseCsvData pcd;

            std::vector<std::vector<std::string>> packageData = pcd.getPackageDataFromCsvFile();

            std::cout << "packageData.size() is: " << packageData.size() << std::endl;
            for (int i = 0; i < packageData.size(); i++){
                for (int j = 0; j < 8; j++){
                    std::cout << packageData[i][j] << std::endl;
                } 
            }
        }
};
        // std::vector<std::vector<std::string>> getDistanceNameData() {

        //     return convertCsvFileTo2dVector(DISTANCE_TABLE);

        // }

            // // Define variables
            // std::fstream file;
            // std::vector<std::string> record; 
            // std::vector<std::string> w;
			// std::vector<std::vector<std::string>> csv_vector;
            // std::string line;

            // // Open the defined file
            // file.open(SUBDIRECTORY + DISTANCE_TABLE);

            // // Read the file line by line
            // while (getline(file, line)){
            //     record.push_back(line);
            // }

			// // Get each data item in a row of data.
			// for (int rowNum = 0; rowNum < record.size(); rowNum++){

			// 	// std::cout << record[rowNum] << std::endl;

			// 	std::vector<std::string> v = split (record[rowNum], ',');

            //     // for (int i = 0; i < 3; i++){
            //     csv_vector.push_back(v);
            //     // }
			// }
            
            // // for (int i = 0; i < w.size(); i++){
            // //     std::cout << w[i] << std::endl;
            // // }

            // // Close the file
            // file.close();

            // // Return the record vector
            // return csv_vector;

        // std::vector<std::string> getDistanceNameData() {

        //     // Define variables
        //     std::fstream file;
        //     std::vector<std::string> record; 
        //     std::string line;

        //     // Open the defined file
        //     file.open(SUBDIRECTORY + DISTANCE_TABLE);

        //     // Read the file line by line
        //     while (getline(file, line)){
        //         record.push_back(line);
        //     }

        //     // Close the file
        //     file.close();

        //     // Return the record vector
        //     return record;
        // } 

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
