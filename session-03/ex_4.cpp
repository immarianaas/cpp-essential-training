/**
 * @file 
 * @brief Resolution of the fourth exercise
 * 
 * The goal was to explore recursive functions.
 */
#include <iostream>

using namespace std;

/**
 * @brief Count from number to 1
 * 
 * Prints recursively every number starting in 
 * the value passed in the parameter to 0
 * 
 * @param n unsigned integer - the value from which
 * the countdown starts
 */
void countdown(unsigned int n) {
    if (n == 0) return;
    cout << n << endl;
    return countdown(n-1);
}

/**
 * @brief testing the exercise resolution
 * 
 * Tests the `countdown` function, starting with 10.
 * 
 * @returns 0 if everything goes write.
 */
int main() {
    countdown(10);
}