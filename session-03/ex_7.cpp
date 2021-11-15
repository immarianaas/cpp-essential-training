/**
 * @file 
 * @brief Resolution of the seventh exercise
 * 
 * The goal was to explore recursive functions and alternatives
 */
#include <iostream>

using namespace std;

/**
 * @brief computes the greatest common divisor using recursivity
 * 
 * Computes the GCD using the Euclidian algorithm recursively
 * 
 * @param a non-negative integer
 * @param b non-negative integer
 * 
 * @returns greatest common divisor between the parameters
 */
unsigned int gdc1(unsigned int a, unsigned int b) {
    if (b==0) return a;
    return gdc1(b, a%b); 
    // cant be gdc(a%b, b) because b != 0 always!!!
}

/**
 * @brief computes the greatest common divisor iteratively
 * 
 * Computes the GCD using the Euclidian algorithm iteratively
 * 
 * @param a non-negative integer
 * @param b non-negative integer
 * 
 * @returns greatest common divisor between the parameters
 */
unsigned int gdc2(unsigned int a, unsigned int b) {
    while (b!=0) {
        unsigned int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

/**
 * @brief Testing the program
 * 
 * Tests the functions with different arguments.
 * 
 * @returns integer 0 if everything goes well
 */
int main() {
    cout << gdc1(4, 7) << " = 1" << endl;
    cout << gdc1(6, 12) << " = 6" << endl;

    cout << endl;
    cout << gdc2(4, 7) << " = 1" << endl;
    cout << gdc2(6, 12) << " = 6" << endl;
}