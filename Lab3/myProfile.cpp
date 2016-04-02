// Lab 3.2
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description: Outputs age, weight, name, and gender.

#include <string>
#include <iostream>
using namespace std;

int main ()
{
	int age = 32;
	double birthWeight = 11;
	string firstName = "Kyle";
	char gender = 'M';
	
	// indentifying output statement
	cout << "My name is " << firstName << endl;
	cout << "My Gender is " << gender << endl;
	cout << "I am " << age << " years old" << endl;
	cout << "My birth weight was " << birthWeight << "lbs" << endl;
}