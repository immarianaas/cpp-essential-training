/** 
 * @file 
 * @brief Resolution of the eight exercise.
 * 
 * The goal was to explore `for loops`.
 * The program asks the user for a number and prints
 * a table with 30 multiples of that number.
 */

#include <iostream>
#include <iomanip>

using namespace std;

/**
 * @brief function that contains the logic.
 * 
 * Asks the user for a number and prints a formatted table
 * with 30 multiples of that number.
 * 
 * @returns integer 0 if everything goes well
 */

int main() {
    cout << "Number: ";
    int num, curr_num = 0;
    cin >> num;

    int no_lines = 3, no_columns = 10;
    for (int i = 0; i < no_lines; i++) {
        for (int j = 0; j < no_columns; j++) {
            curr_num += num;
            cout << setw(5) << curr_num;
        }
        cout << endl;
    }
}