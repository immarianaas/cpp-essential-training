/** 
 * @file 
 * @brief Resolution of the second exercise.
 * 
 * The goal was to explore functions.
 * The program  asks the user to input an hour
 * in a defined format, and converts it to the correspondent
 * number of senconds, outputting the result.
 */

#include <iostream>

using namespace std;

/**
 * @brief computes the number of seconds from other time units.
 * 
 * Computes the number of seconds that `<hours>:<mins>:<secs>`
 * have.
 * @param hours integer for the hours of the time to convert
 * @param mins integer for the minutes of the time to convert
 * @param secs integer for the seconds of the time to convert
 * 
 * @returns the correspondent number of seconds
 */
long hms_to_secs(int hours, int mins, int secs) {
    return hours * 60 * 60 + mins * 60 + secs;
}

/**
 * @brief deals with input and output
 * 
 * Asks the user for a time in the format `hh::mm::ss`
 * (which is not validated), and outputs the number of seconds
 * 
 * @returns integer 0 if all goes well
 */
int main() {
    cout << "Insert a time (format hh:mm:ss): ";
    int hours, mins, secs;
    char c;
    
    cin >> hours >> c >> mins >> c >> secs;
    cout << "In seconds, this is " << hms_to_secs(hours, mins, secs) << " seconds!";

}

