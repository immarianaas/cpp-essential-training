/** 
 * @file 
 * @brief Resolution of the third exercise.
 * 
 * The goal was to explore output and input operations, 
 * as well as simple mathematical ones.
 */

#include <iostream>

using namespace std;

/**
 * @brief `main` function that contains the whole logic.
 * 
 * This funciton inquires the user for an opeartion,
 * and depending on the decision, proceeds with the adequate
 * operations, which include asking for a temperature value and
 * converting it to either Fahrenheit or Celsius
 * 
 * @returns integer 0 if everything goes well
 */

int main()
{
    cout << "Chose:" << endl
         << "1) convert Fahrenheit to Celsius" << endl
         << "2) convert Celsius to Fahrenheit"
         << endl;
    int option;

    cin >> option;

    double initial_temp, converted_temp;

    if (option == 1)
    { // Fahr to Cels
        cout << "Enter temperature in Fahrenheit: ";
        cin >> initial_temp;
        converted_temp = (5.0 / 9.0) * (initial_temp - 32);
        cout << "In Celsius that's " << converted_temp << endl;
    }
    else if (option == 2)
    { // Cels to Fahr
        cout << "Enter temperature in Celsius: ";
        cin >> initial_temp;
        converted_temp = initial_temp * 1.8 + 32;
        cout << "In Fahrenheit that's " << converted_temp << endl;
    }
    else
    {
        cout << "Invalid option." << endl;
        return -1;
    }
}
