// file: headers.h for newanagrams

// Define class AString here!
// See PDF for details
using namespace std;
class AString {
private:
    string StringValue;
public: 
    //Constructors
    AString();
    AString(string value);

    //Accessors
    string getStringValue() const;

    //Mutators
    void cleanUp();
    void countLetters(int letterCount[]);
    void getAString();

};

// DO NOTE CHANGE THESE AND DO NOT ADD TO THEM!
bool compareCounts(int a[], int b[]);
const int ARRAYSIZE = 26;
