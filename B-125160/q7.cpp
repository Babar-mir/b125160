#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char text[200];

    cout << "Enter a sentence: ";
    cin.getline(text, 200);

    char *ptr = text;

    int digits = 0;
    int alphabets = 0;
    int spaces = 0;

    while (*ptr != '\0') {

        if (isdigit(*ptr))
            digits++;

        else if (isalpha(*ptr))
            alphabets++;

        else if (*ptr == ' ')
            spaces++;

        ptr++;
    }

    cout << "Digits: " << digits << endl;
    cout << "Alphabetic characters: " << alphabets << endl;
    cout << "Spaces: " << spaces << endl;

    return 0;
}