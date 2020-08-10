# include <iostream>
# include <string>

using namespace std;

int main() {
    // letters that the user inputs will be stored here.
    string letters;

    cout << "Enter letters to be displayed: ";
    cin >> letters;

    // the letters.length() method determines how long the string of letters is, and then stores that number in num_of_letters.
    size_t num_of_letters = letters.length();
    int pos {0};

    // the range-based for loop allows letter to use the string stored in letters, and cycles through each of the letters.
    for (char letter: letters) {
        // number of spaces, or whitespace, needed is determined by the number of letters - position.
        size_t num_of_spaces = num_of_letters - pos;

        // the while loop decreases the amount of spaces for each loop, and ends once the number of spaces needed is no longer greater than 0.
        while (num_of_spaces > 0) {
            cout << " ";
            --num_of_spaces;
        }

        // here the letters begin printing out.
        for (size_t i = 0; i < pos; i++) {
            cout << letters.at(i);
        }

        // prints out a letter determined by the range-based for loop.
        cout << letter;

        // prints out appropriate letters after letter to finish a line in the pyramid.
        for (int j = pos - 1; j >= 0; --j) {
            auto k = static_cast<size_t>(j);
            cout << letters.at(k);
        }
        
        // ends the line in the pyramid.
        cout << endl;
        // increments pos (position) which ultimately reduces the amount of whitespace on the next line (loop), leaving more room for letters to create the pyramid effect.
        ++pos;
    }

    return 0;
}