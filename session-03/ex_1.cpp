/** 
 * @file 
 * @brief Resolution of the first exercise.
 * 
 * The goal was to explore the use of functions.
 */
#include <iostream>
#include <math.h>

using namespace std;

/**
 * @brief Computes the BMI.
 * 
 * Using the information in the parameters, computes the BMI
 * using the expression [weight / height^2]
 * 
 * @returns double with the value of the BMI
 */
double BMI(int weight, int height) {
    return (double) weight / pow(height, 2);
}

/**
 * @brief Returns a word corresponding to the BMI value.
 * 
 * Returns 3 different strings depending on the BMI value.
 * 
 * @returns string "Underweight" if BMI is lower than 18.5;
 * @returns string "Normal" if BMI is between 18.5  and 25);
 * @returns string "Overweight" if BMI is between 25 and 30
 */
string classify(double bmi) {
    if (bmi < 18.5) return "Underweight";
    else if (18.5 <= bmi < 25) return "Normal";
    else if (25 <= bmi < 30) return "Overweight";
    
    return "Obese";
}

/**
 * @brief classify BMI given values by user
 * 
 * Asks the user for weight and height and displays correspondent
 * category
 * 
 * @returns 0 if everything goes well
 */
int main() {
    double w, h;

    cout << "Weight: ";
    cin >> w;

    cout << "Height: ";
    cin >> h;

    cout << "Result: " << classify(BMI(w, h)) << endl;
}