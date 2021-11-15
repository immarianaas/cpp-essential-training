/** 
 * @file 
 * @brief Resolution of the fifth exercise.
 * 
 * The goal was to explore formatting output.
 * Even though not required, I chose to use a function to
 * simplify this resolution.
 */

#include <iostream>
#include <iomanip>

using namespace std;


/**
 * @brief outputs arguments with the desired required format
 * (for this problem)
 * @param first `std::string` that holds the value to be printed in the first column
 * @param second `std::string` that holds the value to be printed on the second column
 * @param third `std::string` that holds the value to be printed on the third column
 * @param fourth `std::string` that holds the value to be printed on the fourth column
 */

void write_formatted(string first, string second, string third, string fourth) {
    cout << setw(12) << first << setw(12) << second << setw(10) << third << setw(12) << fourth << endl;
}

/**
 * @brief where the calls to print the table are made
 * executing this function will output the required table
 * @returns integer 0 if everything goes well
 */
int main() {
    cout << left;
    write_formatted("Last name", "First name", "Town", "Country");
    cout << setfill('-') << setw(12+12+10+12) << "" << endl << setfill(' ');
    write_formatted("Silva", "Joao", "Aveiro", "Portugal");
    write_formatted("Almeida", "Maria", "Madrid", "Spain");
    write_formatted("Santos", "Miguel", "Moscow", "Russia");
         
}

