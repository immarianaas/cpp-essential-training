/** 
 *
 * @file 
 * @brief Resolution of the ninth exercise.
 * 
 * The goal was to explore `for loops` and output formatting.
 * The program prints a triangle based on the number of
 * lines the user choses when prompted.
 */

#include <iostream>
#include <iomanip>

using namespace std;

/**
 * @brief function that contains the logic.
 * 
 * Asks the user for a number and prints a triangle using `*`
 * with the height equal to the number chosen.
 * 
 * @returns integer 0 if everything goes well
 */

int main() {
    cout << "How many lines: ";
    int lines;
    cin >> lines;

    for (int i = 0; i<lines; i++) {
        int xs = i*2 +1;
        int spaces = (lines - i - 1);

        cout << setw(spaces) << setfill(' ') << "" << setw(xs) << setfill('*') << "" << endl;

        // cout << spaces << endl;

    }

}
