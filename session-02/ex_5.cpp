/** 
 * @file 
 * @brief Resolution of the fifth exercise.
 * 
 * The goal was to explore the use of functions and 
 * string manipulation.
 */
#include <iostream>

using namespace std;

/**
 * @brief executes the program logic
 * 
 * Starts by asking the user what the keyword is. Then
 * asks the user to insert text. Each paragraph ends with the
 * symbol '$'. After each paragraph, the program outputs the
 * total number of words in it, and the number of times the 
 * keyword has appeared. To finish the program 'End$' should
 * be inserted.
 * 
 * @returns integer 0 if everything goes well
 */
int main() {
    string key;
    cout << "keyword: ";
    cin >> key;
    cin.ignore(); // fica um \n no buffer (que vai ser reconhecido no 'getline'!)

    while (true) {
        cout << "insert text:" << endl;

        string text;
        getline(cin, text, '$');

        // check if this is the last
        if (text == "End" || text=="\nEnd") return 0;

        cout << text << endl;

        int words = 0, keys = 0;

        bool space = true;
        for (size_t i = 0; i < text.size(); i++) {
            char c = text.at(i);

            if (isalnum(c) && space) {
                words++;
                space = false;
                // check if word is able to fit the space or if theres a space
                if (i + key.size() > text.size()) continue;

                // check if substring is equal to keyword
                if (key != text.substr(i, key.size())) continue;
                    
                if (i+key.size() == text.size() || isspace(text.at(i+key.size()))) keys++;


            } else if (isspace(c)) space = true;
        }

        cout << "Stats:" << endl
             << "No of words: " << words << endl
             << "No of times keywords appeared: " << keys << endl;

    }
}
