/** 
 * @file 
 * @brief Resolution of the first exercise.
 * 
 * The goal was to explore ways to format output.
 */

#include <iostream>
#include <iomanip>

using namespace std;

/**
 * @brief `main` function that prints what was required.
 * 
 * The goal was to explore the `setw` function as a way to format output.
 * ___
 * `cout << right` is default; we can use `left` too
 * @return integer 0 if everything goes well
 */

int main() {
    cout << right
         << setw(10) << 1990 << setw(10) << 135 << "\n"
         << setw(10) << 1991 << setw(10) << 7290 << "\n"
         << setw(10) << 1992 << setw(10) << 11300 << "\n"
         << setw(10) << 1993 << setw(10) << 76200
         << endl;
}
