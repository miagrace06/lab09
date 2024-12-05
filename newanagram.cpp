/* 
 * NEWANAGRAM.CPP by Ziad Matni (c) 2024
 * For use in CS16 labs 
 *
 * DO NOT CHANGE ANYTHING ALREADY IN THIS PROGRAM!
 * Students should fill in the places where it says *** MISSING CODE HERE! ***
 */
#include <iostream>
#include <string>
using namespace std;

#include "functions.cpp"

int main() {
    // 1. Declare 2 objects of AString,
    //      construct as asked to (see PDF document), 
    //      get the string values using class --member function-- getStringValue(),
    //      print the string values
    AString sentence1, sentence2("nothing");
    cout << "Two objects declared with values: ";
    cout << sentence1.getStringValue() << " and ";
    cout << sentence2.getStringValue() << endl;


    // 2. Get user inputs using class --member function-- getAString()
    //      and clean up the strings using class --member function-- cleanUp()
    // Get user inputs and clean up the strings
    cout << "Enter string value: ";
    sentence1.getAString();
    sentence1.cleanUp();

    cout << "Enter string value: ";
    sentence2.getAString();
    sentence2.cleanUp();




    // 3. Set up 2 arrays and initialize to all zeros
    //      and count letters in the strings using class --member function-- countLetters()

    int ca1[ARRAYSIZE] = {0}, ca2[ARRAYSIZE]={0};
    sentence1.countLetters(ca1);
    sentence2.countLetters(ca2);

   

    // 4. Use external function compareCounts to decide
    //      if the 2 strings are anagrams of each other or not

     // Compare letter counts to determine if anagrams
    bool badCount = compareCounts(ca1, ca2);

    if (badCount) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
