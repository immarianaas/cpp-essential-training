/**
 * @file 
 * @brief Resolution of the eigth and tenth exercise
 * 
 * The goal was to explore recursive functions and function
 * overloading.
 */
#include <iostream>

using namespace std;

/**
 * @brief computes the `n` raised to the exponent `p`
 * 
 * Recursively computes double `n` raised to the exponent integer `p`
 * 
 * @param n base value - double
 * @param p exponent value - defaults to 2
 * 
 * @returns ´n´ to the power of ´p´
 */
double power(double n, int p=2) {
    if (p == 0) return 1;
    else if (p == 1) return n;
    else if (p < 0) {
        p = -p;
        n = 1/n;
    }
    return n * power(n, p-1);
}

/**
 * @brief computes the `n` raised to the exponent `p`
 * 
 * Recursively computes char `n` raised to the exponent integer `p`
 * 
 * @param n base value - char
 * @param p exponent value - defaults to 2
 * 
 * @returns ´n´ to the power of ´p´
 */
double power(char n, int p=2) {
    if (p == 0) return 1;
    else if (p == 1) return n;
    else if (p < 0) {
        p = -p;
        n = 1/n;
    }
    return n * power(n, p-1);
}

/**
 * @brief computes the `n` raised to the exponent `p`
 * 
 * Recursively computes short `n` raised to the exponent integer `p`
 * 
 * @param n base value - short
 * @param p exponent value - defaults to 2
 * 
 * @returns ´n´ to the power of ´p´
 */
double power(short n, int p=2) {
    if (p == 0) return 1;
    else if (p == 1) return n;
    else if (p < 0) {
        p = -p;
        n = 1/n;
    }
    return n * power(n, p-1);
}

/**
 * @brief computes the `n` raised to the exponent `p`
 * 
 * Recursively computes int `n` raised to the exponent integer `p`
 * 
 * @param n base value - integer
 * @param p exponent value - defaults to 2
 * 
 * @returns ´n´ to the power of ´p´
 */
double power(int n, int p=2) {
    if (p == 0) return 1;
    else if (p == 1) return n;
    else if (p < 0) {
        p = -p;
        n = 1/n;
    }
    return n * power(n, p-1);
}

/**
 * @brief computes the `n` raised to the exponent `p`
 * 
 * Recursively computes long `n` raised to the exponent integer `p`
 * 
 * @param n base value - long
 * @param p exponent value - defaults to 2
 * 
 * @returns ´n´ to the power of ´p´
 */
double power(long n, int p=2) {
    if (p == 0) return 1;
    else if (p == 1) return n;
    else if (p < 0) {
        p = -p;
        n = 1/n;
    }
    return n * power(n, p-1);
}

/**
 * @brief computes the `n` raised to the exponent `p`
 * 
 * Recursively computes float `n` raised to the exponent integer `p`
 * 
 * @param n base value - float
 * @param p exponent value - defaults to 2
 * 
 * @returns ´n´ to the power of ´p´
 */
double power(float n, int p=2) {
    if (p == 0) return 1;
    else if (p == 1) return n;
    else if (p < 0) {
        p = -p;
        n = 1/n;
    }
    return n * power(n, p-1);
}


/**
 * @brief Testing the program
 * 
 * Tests the functions with different arguments, outputting
 * the results gotten along with the correct ones.
 * 
 * @returns integer 0 if everything goes well
 */
int main() {
    cout << "3^3 = " << power(3.0, 3) << endl;
    cout << "3^2 = " << power(3.0) << endl;
    cout << "3^-2 = " << power(3.0, -2) << endl;

    cout << endl;

    cout << "char: 3^3 = " << power((char) 3, 3) << endl;
    cout << "char: 3^-2 = " << power((char) 3, -2) << endl;

    cout << endl;

    cout << "short: 3^3 = " << power((short) 3, 3) << endl;
    cout << "short: 3^-2 = " << power((short) 3, -2) << endl;

    cout << endl;

    cout << "int: 3^3 = " << power((int) 3, 3) << endl;
    cout << "int: 3^-2 = " << power((int) 3, -2) << endl;

    cout << endl;

    cout << "long: 3^3 = " << power((long) 3, 3) << endl;
    cout << "long: 3^-2 = " << power((long) 3, -2) << endl;

    cout << endl;

    cout << "float: 3^3 = " << power((float) 3, 3) << endl;
    cout << "float: 3^-2 = " << power((float) 3, -2) << endl;

}