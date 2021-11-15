/** 
 * @file 
 * @brief Resolution of the second exercise.
 * 
 * The goal was to explore basic operations and outputting.
 */

#include <iostream>

using namespace std;

/** 
 * @brief `main` function that executes program
 * It computes some basic operations and outputs them
 * ___
 * ### NOTE:
 * we should not put operations inside these statements because
 * sometimes the value isn't defined (the operation isn't finished)
 * 
 * @return integer 0 if everything goes well
 */

int main() {
    const int initial = 10;
    int second = initial * 2;

    cout << initial << endl
         << second << endl;
    
    --second;
    cout << second << endl;

}
