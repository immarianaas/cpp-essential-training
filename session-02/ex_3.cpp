/** 
 * @file 
 * @brief Resolution of the third exercise.
 * 
 * The goal was to explore functions.
 * 
 * The program  asks the user to input various numbers 
 * (which will be stored in an array with a size defined by
 * the user previously) and outputs the index of the largest 
 * number.
 */

#include <iostream>

using namespace std;

/**
 * @brief find the index of the highest value in an int array
 * 
 * @param array pointer to begining of `int array` of which 
 * we want to find the index of the highest value
 * @param size the size of the array to make it possible to loop through
 * its values
 * 
 * @returns integer with the index of the highest value of the array
 */

int maxint(int *array, int size) {
    int maxval = array[0], maxindex = 0;
    for (int i = 1; i<size; i++) {
        if (maxval < array[i]) {
            maxval = array[i];
            maxindex = i;
        }
    }
    return maxindex;
}


/**
 * @brief deals with input and output
 * 
 * Asks the user about the length of the array, deals with
 * reading its values (without verification since that is out 
 * of the scope of this session) and outputs the index we want
 * 
 * @returns integer 0 if all goes well
 */
int main() {

    int elems = 0;

    while (elems <= 0) {
        cout << "How many elements you want in the array? ";
        cin >> elems;
    }

    int *array = new int[elems];
    for (int i = 0; i<elems; i++) {
        cin >> array[i];
    }

    cout << "The max value is in the index " << maxint(array, elems) << endl;

}

