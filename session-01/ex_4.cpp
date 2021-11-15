/** 
 * @file 
 * @brief Resolution of the fourth exercise.
 * 
 * The goal was to explore output and input operations, 
 * making some simple calculations and formatting output.
 */

#include <iostream>
#include <iomanip>

using namespace std;

/**
 * @brief function that contains the whole logic.
 * 
 * This funciton asks the user for 2 fractions in the form 
 * `<num>/<num> + <num>/<num>` and sums them, showing results
 * in a formatted way.
 * 
 * @returns integer 0 if everything goes well
 */

int main() {
    cout << "Insert 2 fractions [a/b + c/d]: " << endl;
    int a, b, c, d;
    char div_char, operation;
    cin >> a >> div_char >> b >> operation >> c >> div_char >> d;

    // calcules
    int top = a*d + b*c;
    int bottom = b*d;

    // find paddings/widths for formatting
    int line_width = max(to_string(top).length(), to_string(bottom).length()) + 2;
    int top_padding = (line_width - to_string(top).length()) / 2 + to_string(top).length();
    int bottom_padding = (line_width - to_string(bottom).length()) / 2 + to_string(bottom).length();

    cout << setw(top_padding) << top << endl 
         << setfill('-') << setw(line_width) << "" << endl
         << setfill(' ') << setw(bottom_padding) << bottom << endl;
}