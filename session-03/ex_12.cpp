/**
 * @file 
 * @brief Resolution of the twelfth exercise
 * 
 * The goal was to explore template functions.
 */
#include <iostream>

using namespace std;

/**
 * @brief compares both arguments for equality
 * 
 * Checks if both arguments (with a generic type) 
 * are equal using the operator ==.
 * 
 * @param elem1 generic type - one of the values to check
 * @param elem2 generic type - other value to check
 * 
 * @returns true if `elem1` is equal to `elem2`
 * @returns false if `elem1` is not equal to `elem2`
 */
template <class T>
bool isEqual(T elem1, T elem2) {
    return elem1 == elem2;
}

/**
 * @brief Testing the program
 * 
 * Here the function is tested using `int`, `bool` 
 * and `char` values. The expected and gotten values are
 * displayed on the screen.
 * 
 * @returns integer 0 if everything goes well
 */
int main() {
    cout << "2 == 2 ? " << isEqual(2,2) << endl;
    cout << "2 == 3 ? " << isEqual(2,3) << endl;

    cout << endl;

    cout << "true == true ? " << isEqual(true, true) << endl;
    cout << "true == false ? " << isEqual(true, false) << endl;

    cout << endl;

    cout << "\"hello\" == \"hello\" ? " << isEqual("hello", "hello") << endl;
    cout << "\"hello\" == \"bye\" ? " << isEqual("hello", "bye") << endl;
}