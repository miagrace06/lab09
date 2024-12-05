#include "Student.h"
#include <sstream> // for ostringstream
using namespace std;


Student::Student(int perm, string lName, string fName) {
	perm = p;
	lastName = lName;
	firstAndMiddleNames = fNames;
 
}

// THE NEXT 4 MEMBER FUNCTIONS NEED TO BE DEFINED BY THE STUDENT
//      AND ARE, IN THE MEANTIME, DEFINED AS STUBS:
// Getter for perm number
int Student::getPerm() { 
  return perm;
}

// Getter for last name
string Student::getLastName() { 
  return lastName;
}

// Getter for first and middle names
string Student::getFirstAndMiddleNames() { 
  return firstAndMiddleNames;
}

// Getter for full name (combining first/middle and last names)
string Student::getFullName() { 
  return firstAndMiddleNames + " " + lastName;
}

// THIS MEMBER FUNCTION IS DEFINED FOR YOU ALREADY:
// DO NOT CHANGE IT
string Student::toString()  { 
  // e.g. [12345,Smith,Malory Logan]
  ostringstream oss;
  
  oss << "[" 
      << getPerm() << ","
      << getLastName() << ","
      << getFirstAndMiddleNames() << "]";
  return oss.str();
} 

