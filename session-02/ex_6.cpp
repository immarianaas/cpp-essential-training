/** 
 * @file 
 * @brief Resolution of the sixth exercise.
 * 
 * The goal was to explore the use of loops and 
 * swtich statements.
 */
#include <iostream>

using namespace std;

/**
 * @brief executes the program logic
 * 
 * The program is constantly asking the user to input an
 * operation with the format [a/b <op> c/d], with <op> being
 * either '+', '-', '/' or '*'. If it is none of these, then an
 * error shows and the program is stopped. If not, the calculation
 * is made and the results are displayed. Then the user can chose
 * if they have another calculation to make, and has the options 'y'
 * (yes) or 'n' (no). If they chose other option, then an error
 * appears and the program is stopped.
 * 
 * @returns integer 0 if everything goes well; 1 if the user
 * inputs wrongly
 */
int main() {
    bool ask = true;

    while (ask) {
        int a, b, c, d;
        char op, div;

        cin >> a >> div >> b >> op >> c >> div >> d;

        int up, down;

        switch (op) {
            case '+':
                up = a*d + b*c;
                down = b*d;
                break;

            case '-':
                up = a*d - b*c;
                down = b*d;
                break;

            case '*':
                up = a*c;
                down = b*d;
                break;

            case '/':
                up = a*d;
                down = b*c;
                break;
            default:
                cout << "An error happened.";
                return 1;
        }

        cout << "The result is " << up << "/" << down << " (= " << ((double) up)/down << ")" << endl;
        cout << "Do you want to do another? ('y' / 'n') ";
        char resp;
        cin >> resp;
        switch (resp) {
            case 'y':
                ask = true;
                break;
            case 'n':
                ask = false;
                break;
            default:
                ask = false;
                cout << "An error happened.";
                return 1;
                
        }
    }
}