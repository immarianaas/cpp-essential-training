/**
 * @file 
 * @brief Resolution of the eigth exercise
 * 
 * The goal was to explore recursive functions and alternatives.
 * Even though we were only required to develop 2 implementations,
 * I added a third one.
 */

#include <iostream>

using namespace std;

/**
 * @brief computes the n-th Fibonacci number recursively
 * 
 * Computes the n-th (passed in argument) Fibonacci number 
 * using the Euclidian algorithm recursively
 * 
 * @param no 'n-th' value
 * 
 * @returns positive number corresponding to the n-th Fibonnacci number
 */
unsigned int fibonacci1(unsigned no) {
    if (no == 0) return 0;
    if (no == 1) return 1;
    return fibonacci1(no-1) + fibonacci1(no-2);
}


/**
 * @brief computes the n-th Fibonacci number interatively using array
 * 
 * Computes the n-th (passed in argument) Fibonacci number 
 * using the Euclidian algorithm interatively using an array
 * 
 * @param no 'n-th' value
 * 
 * @returns positive number corresponding to the n-th Fibonnacci number
 */
unsigned fibonacci2(unsigned int no) {
    int fib[no+1];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i<=no; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[no];
}


/**
 * @brief computes the n-th Fibonacci number iteratively
 * 
 * Computes the n-th (passed in argument) Fibonacci number 
 * using the Euclidian algorithm iteratively using two 
 * temporary variables
 * 
 * @param no 'n-th' value
 * 
 * @returns positive number corresponding to the n-th Fibonnacci number
 */
unsigned fibonacci3(unsigned int no) {
    if (no == 0) return 0;
    if (no == 1) return 1;

    unsigned int n1, n2, f;
    n1 = 0;
    n2 = 1;
    for (int i = 2; i<=no; i++) {
        f = n1 + n2;
        n1 = n2;
        n2 = f;
    }
    return f;
}

/**
 * @brief Testing the program
 * 
 * Tests the functions with different arguments.
 * 
 * @returns integer 0 if everything goes well
 */
int main() {
    cout << "fibo1(9) == 34: " << fibonacci1(9) << endl;
    cout << "fibo2(9) == 34: " << fibonacci2(9) << endl;
    cout << "fibo3(9) == 34: " << fibonacci3(9) << endl;
}