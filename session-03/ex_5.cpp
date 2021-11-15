/**
 * @file 
 * @brief Resolution of the fifth exercise
 * 
 * The goal was to explore recursive functions.
 */
#include <iostream>

using namespace std;

/**
 * @brief Count the number of algarisms in the argument's value
 * 
 * Recursively divides number by 10, to discover the number
 * of algarisms in the number.
 * 
 * @param no non-negative number whose algarisms are to be counted
 * 
 * @returns number of algorisms in argument
 */
int count_digits(unsigned int no) {
    if (no < 10) return 1;
    return 1 + count_digits(no/10);
}

/**
 * @brief Testing the program
 * 
 * Executes the function with different parameters to test
 * it, while outputting results. Also promts user to input a number
 * and uses that number to test. 
 * 
 * @returns integer 0 if everything goes well
 */
int main() {
    cout << "Should be 2: " << count_digits(10) << endl;
    cout << "Should be 1: " << count_digits(3) << endl;
    cout << "Should be 3: " << count_digits(133) << endl;
    cout << "Should be 5: " << count_digits(13425) << endl;


    cout << "Write your number: ";
    unsigned int num;
    cin >> num;
    cout << num << " has " << count_digits(num) << " digits." << endl;
}