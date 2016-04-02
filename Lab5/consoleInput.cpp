// Lab 5.6
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description:  Program askes age, name, temperature, location, and then outputs the input

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
int main ()
{
	
	// code block to read a int value from the keyboard
	int age;
	cout << "Enter your age: ";
	cin >> age;
	cin.ignore(1000,10);
  
	// code block to read a string value from the keyboard
	string name;
	cout << "Enter your name: ";
	getline (cin,name);
		
	// code block to read a double value from the keyboard
	double temp;
	cout << "Enter the temperature outside right now (degrees F): ";
	cin >> temp;
	cin.ignore(1000,10);
	
	// code block to read a string value from the keyboard
	string location;
	cout << "What city are you in right now? ";
	getline (cin,location);
	
	// degree symbol
	char degreeSymbol = 0xF8;
	
	// indentifying output statement
	cout << name << " is " << age << " years old." << endl;
	cout << "It's " << temp << degreeSymbol << " F in " << location << endl;
}