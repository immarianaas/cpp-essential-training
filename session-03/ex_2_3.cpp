/**
 * @file 
 * @brief Resolution of the second and third exercise
 * 
 * The goal was to explore functions (and template functions).
 */
#include <iostream>

using namespace std;

/** 
 * @brief computes the maximum of both values passed as arguments
 * 
 * Given two arguments with types that implement the operator <,
 * returns the highest value - acording to mentioned operator.
 * 
 * @param n1 variable with generic type that implements operator <
 * @param n2 variable with generic type that implements operator <
 * 
 * @returns argument with higher value
 */
template <class T>
T max2(T n1, T n2) {
    return n1 > n2 ? n1 : n2;
}

/** 
 * @brief computes the maximum of the 3 values passed as arguments
 * 
 * Given three arguments with types that implement the operator <,
 * returns the highest value - acording to mentioned operator.
 * 
 * @param n1 variable with generic type that implements operator <
 * @param n2 variable with generic type that implements operator <
 * @param n3 variable with generic type that implements operator <
 * 
 * @returns argument with higher value
 */
template <class T>
T max3(T n1, T n2, T n3) {
    T m1 = max2(n1, n2);
    return m1 > n3 ? m1 : n3;
}

/** 
 * @brief tests the functions
 * 
 * Tests the exercise resolution, outputting resukts

 * @returns integer 0 if everything goes right
 */
int main() {
    cout << max3(1, 2, 3) << endl;
    cout << max3(1, 3, 2) << endl;
    cout << max3(3, 2, 1) << endl;
}
