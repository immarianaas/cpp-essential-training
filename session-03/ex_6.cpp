/**
 * @file 
 * @brief Resolution of the sixth exercise
 * 
 * The goal was to explore recursive functions.
 */
#include <iostream>

using namespace std;


/**
 * @brief converts decimal value to binary
 * 
 * Recursively divides number by 2, computing number in binary
 * representation.
 * 
 * @param no non-negative number in decimal to be converted
 * 
 * @returns string with a binary representation
 */
string int2bin(unsigned int no) {
    if (no == 0) return to_string(0);
    return int2bin(no/2) + to_string(no%2);
}

/**
 * @brief Testing the program
 * 
 * Prompts the user for a number and display its representation
 * in binary.
 * 
 * @returns integer 0 if everything goes well
 */
int main() {
    while (true) {
        unsigned int no;
        cin >> no;
        cout << no << " in bin: " << int2bin(no) << endl;
    }
}