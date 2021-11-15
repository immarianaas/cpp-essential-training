/** 
 * @file 
 * @brief Resolution of the fourth exercise.
 * 
 * The goal was to explore the use of functions and 
 * string manipulation.
 */

#include <iostream>

using namespace std;

/**
 * @brief solves the first exercise (a)
 * 
 * Counts the number of alphabetic characters in a string
 *
 * @param s string to be checked 
 *  
 * @returns integer with the desired count
 */
int count_alpha(const string &s);

/**
 * @brief solves the first part of the second exercise (b)
 * 
 * Counts the number of lower case characters in a string
 * 
 * @param s string to be checked
 * 
 * @returns integer with the desired count
 */
int count_lowers(const string &s);

/**
 * @brief solves the second part of the second exercise (b)
 * 
 * Counts the number of upper case characters in a string
 * 
 * @param s string to be checked
 * 
 * @returns integer with the desired count
 */
int count_uppers(const string &s);

/**
 * @brief solves the third exercise (c)
 * 
 * Compares the strings in the arguments and presents a 
 * message about which one is 'greater' in alphabetical order
 * 
 * @param s1 first string to be used in comparison
 * @param s2 second string to be used in comparison
 */
void equals_or_greater(const string &s1, const string &s2);

/**
 * @brief solves the fourth exercise (d)
 * 
 * Converts (creating a new one) the string passed in the 
 * argument in an all lower case one.
 * 
 * @param s1 string to be 'converted'
 * 
 * @returns a string equivalent to the argument with all 
 * letters lower cased
 */
string tolower(const string &s1);

/**
 * @brief solves the fifth exercise (e)
 * 
 * Creates and returns a string equal to the passed one where
 * every occurence of multiple spaces are replaced by a 
 * single space
 * 
 * @param s1 string to be 'converted'
 * 
 * @returns a string equivalent to the argument after the
 * desired changes
 */
string replace(const string &s1);

/**
 * @brief solves the sixth exercise (f)
 * 
 * Creates and returns a string equal to the passed one where 
 * all the words have the first letter capitalized
 * 
 * @param s1 string to be 'converted'
 * 
 * @returns a string equivalent to the argument after the
 * desired changes
 */
string capitalize(const string &s1);

/**
 * @brief solves the seventh exercise (g)
 * 
 * Checks whether the string in the argument is a palindrome
 * 
 * @param s1 string to be checked
 * 
 * @returns true if the string is a palindrome and false otherwise
 */
bool ispalindrome(const string &s1);



/**
 * @brief output the exercise 'name'
 * 
 * Outputs to `cout` the id of the exercise.
 * 
 * @param alinea id of the exercise to be printed
 */
void print(char alinea) {
    cout << endl;
    cout << "-----" << endl;
    cout << "| "  << alinea << " |" << endl;
    cout << "-----" << endl;
}

/**
 * @brief executes every function to validate them
 * 
 * Calls every function to test them - check if they 
 * are working properly
 * 
 * @returns integer 0 if everything goes well
 */
int main() {
    print('a');
    cout << "no. alphabetic characters in string: " 
         << count_alpha("what134is897d)(#$(=)$#?is") 
         << " (should be 9)" << endl;

    print('b');
    cout << "no. lower chars in string: "
         << count_lowers("this IS A new STRIN9824387()//&)=")
         << " (should be 7)" << endl;

    cout << "no. upper chars in string: "
         << count_uppers("this IS A new STRIN9824387()//&)=")
         << " (should be 8)" << endl;

    print('c');
    cout << "how do these compare? "
         << "(should be EQUAL) ";
    equals_or_greater("equal", "equal"),

    cout << "how do these compare? "
         << "(should be GREATER) ";
    equals_or_greater("eaqual", "equal");

    cout << "how do these compare? "
         << "(should be LOWER) ";
    equals_or_greater("ezqual", "equal");

    print('d');
    cout << "string lowered: "
         << tolower("Help PSDojdaoijadoiWOIj(/)&") << endl;

    print('e');
    cout << "string w/ spaces replaced: >"
         << replace("    hmmm   will    this \t worj \n idsaodaoij==D)(=)(    s8987")
         << endl;
    
    print('f');
    cout << "string capitalized: "
         << capitalize("entao sera que isto 98798vai =(=)resultar hh?")
         << endl;

    print('g');
    cout << "palindrome? "
         << ispalindrome("yessey") << " (should be TRUE/1)" << endl;

    cout << "palindrome? "
         << ispalindrome("yesseymmm") << " (should be FALSE/0)" << endl;

    cout << "palindrome? "
         << ispalindrome("y es s ey") << " (should be TRUE/1)" << endl;


}

int count_alpha(const string &s) {
    int ret = 0;
    for (char c : s) {
        if (isalpha(c)) ret++;
    }
    return ret;
}

int count_lowers(const string &s) {
    int ret = 0;
    for (char c : s) {
        if (islower(c)) ret++;
    }
    return ret;
}

int count_uppers(const string &s) {
    int ret = 0;
    for (char c : s) {
        if (isupper(c)) ret++;
    }
    return ret;
}

void equals_or_greater(const string &s1, const string &s2) {
    int comp = s1.compare(s2);
    if (comp == 0)
        cout << "The strings are EQUAL." << endl;
    else if (comp < 0)
        cout << "The first string is GREATER." << endl;
    else
        cout << "The first string is LOWER." << endl;       
}

string tolower(const string &s1) {
    string ret = "";
    for (char c : s1) {
        ret += tolower(c);
    }
    return ret;
}
   
string replace(const string &s1) {
    string ret = "";
    bool space = false;
    for (char c : s1) {
        if (isspace(c)) {
            space = true;
            continue;
        }
        if (space) {
            space = false;
            ret += " ";
        }
        ret += c;
    }
    return ret;

}

string capitalize(const string &s1) {
    string ret = "";
    bool space = true;
    for (char c : s1) {
        if (space && isalnum(c)) {
            ret += toupper(c);
            space = false;
        }
        else ret += c;

        if (isspace(c)) space = true;
    }
    return ret;
}

bool ispalindrome(const string &s1) {
    // 1st remove all non alphabetic chars
    string newstr = "";
    for (char c : s1) {
        if (isalpha(c)) newstr += c;
    }

    int half = newstr.size() / 2;

    for (int i = 0; i< half; i++) {
        if (newstr.at(i) != newstr.at(newstr.size()-1-i)) return false;
    }
    return true;
}
