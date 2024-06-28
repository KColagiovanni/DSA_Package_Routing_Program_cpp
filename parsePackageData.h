#include <fstream>
#include <ios>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

int add(int num1, int num2){
    return num1 + num2;
}

void read_record() 
{ 

	// File pointer 
	std::fstream fin; 

	// Open an existing file 
	fin.open("reportcard.csv", std::ios::in); 

	// Get the roll number 
	// of which the data is required 
	int rollnum, roll2, count = 0; 
	std::cout << "Enter the roll number "
		<< "of the student to display details: "; 
	std::cin >> rollnum; 

	// Read the Data from the file 
	// as String Vector 
	std::vector<std::string> row; 
	std::string line, word, temp; 

	while (fin >> temp) { 

		row.clear(); 

		// read an entire row and 
		// store it in a string variable 'line' 
		getline(fin, line); 

		// used for breaking words 
		std::stringstream s(line); 

		// read every column data of a row and 
		// store it in a string variable, 'word' 
		while (getline(s, word, ', ')) { 

			// add all the column data 
			// of a row to a vector 
			row.push_back(word); 
		} 

		// convert string to integer for comparision 
		roll2 = stoi(row[0]); 

		// Compare the roll number 
		if (roll2 == rollnum) { 

			// Print the found data 
			count = 1; 
			std::cout << "Details of Roll " << row[0] << " : \n"; 
			std::cout << "Name: " << row[1] << "\n"; 
			std::cout << "Maths: " << row[2] << "\n"; 
			std::cout << "Physics: " << row[3] << "\n"; 
			std::cout << "Chemistry: " << row[4] << "\n"; 
			std::cout << "Biology: " << row[5] << "\n"; 
			break; 
		} 
	} 
	if (count == 0) 
		std::cout << "Record not found\n"; 
} 
