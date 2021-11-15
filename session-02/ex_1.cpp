/** 
 * @file 
 * @brief Resolution of the first exercise.
 * 
 * The goal was to explore `for` and `while loops`.
 * The program  asks the user continuously for a number and 
 * computes its factorial, outputting the result.
 */

#include <iostream>

using namespace std;


/** 
 * @brief where the whole logic is
 * 
 * Asks the user continuously for a number (until the user inputs 0), 
 * outputing its factorial after each input
 *
 * @return integer 0 if everything goes well
 */

int main() {
    int val;

    cout << "Insert a number: ";
    cin >> val;

    while (val != 0) {
        int fact = 1;
        for (int i = val; i > 0; i-- ) fact *= i;

        cout << fact << endl;

        cout << "Insert a number: ";
        cin >> val;
    }
}