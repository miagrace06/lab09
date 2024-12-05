#include <iostream>
#include <string>
#include <cctype>
#include "headers.h"
using namespace std;

// Default constructor
AString::AString() : StringValue("") {}

// Parameterized constructor
AString::AString(string value) : StringValue(value) {}

// Getter
string AString::getStringValue() const {
    return StringValue;
}

// Clean up string (remove non-alphabetic, convert to lowercase)
void AString::cleanUp() {
    string cleaned;
    for (char c : StringValue) {
        if (isalpha(c)) {
            cleaned += tolower(c);
        }
    }
    StringValue = cleaned;
}

// Count letters in the string
void AString::countLetters(int letterCount[]) {
    // Reset letter count array to zeros
    for (int i = 0; i < ARRAYSIZE; ++i) {
        letterCount[i] = 0;
    }

    // Count occurrences of each letter
    for (char c : StringValue) {
        if (isalpha(c)) {
            letterCount[tolower(c) - 'a']++;
        }
    }
}

// Get string input from user
void AString::getAString() {
    getline(cin, StringValue);
}

// Compare letter counts
bool compareCounts(int a[], int b[]) {
    for (int i = 0; i < ARRAYSIZE; ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
