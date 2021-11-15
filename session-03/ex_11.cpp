/**
 * @file 
 * @brief Resolution of the eleventh exercise
 * 
 * The goal was to explore template functions. This exercise
 * consisted of redoing the function from the last exercise 
 * and using a template function.
 */
#include <iostream>

using namespace std;

/**
 * @brief computes the `n` raised to the exponent `p`
 * 
 * Recursively computes `n` (with a generic type) raised to the exponent integer `p`
 * 
 * @param n base value
 * @param p exponent value - defaults to 2
 * 
 * @returns ´n´ to the power of ´p´
 */
template <class T>
double power(T n, int p=2) {
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
 * Uses the same `main()` function as the previous exercise
 * since the results should be the same. The goal is to
 * validate the resolution.
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