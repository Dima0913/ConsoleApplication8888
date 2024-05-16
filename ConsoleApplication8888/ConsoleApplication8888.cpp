#include <iostream>
#include <string>

using namespace std;

string deleteCharAtIndex(string str, int index) {
    if (index >= 0 && index < str.length()) {
        str.erase(index, 1);
    }
    return str;
}

string deleteAllOccurrences(string str, char ch) {
    size_t pos;
    while ((pos = str.find(ch)) != string::npos) {
        str.erase(pos, 1);
    }
    return str;
}

string insertCharAtPosition(string str, int position, char ch) {
    if (position >= 0 && position <= str.length()) {
        str.insert(position, 1, ch);
    }
    return str;
}

string replaceDotsWithExclamation(string str) {
    size_t pos;
    while ((pos = str.find('.')) != string::npos) {
        str.replace(pos, 1, "!");
    }
    return str;
}

int countOccurrences(string str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    char symbol;

    cout << "Enter a string of characters: ";
    getline(cin, input);

    cout << "Enter the character you are looking for: ";
    cin >> symbol;

    cout << "The results:" << endl;
    cout << "1. Delete character by given number: " << deleteCharAtIndex(input, 3) << endl;
    cout << "2. Deletes all occurrences of the given character: " << deleteAllOccurrences(input, symbol) << endl;
    cout << "3. Inserting a character into a specified position: " << insertCharAtPosition(input, 5, symbol) << endl;
    cout << "4. Replace all '.' on '!': " << replaceDotsWithExclamation(input) << endl;
    cout << "5. The number of occurrences of a character in a string: " << countOccurrences(input, symbol) << endl;

}