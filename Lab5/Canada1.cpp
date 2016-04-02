// Lab 5.4
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description: Converts Celsius to Fahrenheit

#include <iomanip>
#include <iostream>

using namespace std;

#include <cmath>

int main ()
{
	
	// code block to read a double value from the keyboard
	double temp;
	cout << "Enter a temperature in degrees Celsius: ";
	cin >> temp;
	cin.ignore(1000,10);
	
	// calculation
	double F = temp * 1.8 + 32;
	
	// formatting output 
    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(1);
	
	// degree symbol
	char degreeSymbol = 0xF8;
	
	// indetifying output statements
	cout << temp << degreeSymbol << " Celsius equals " << F << degreeSymbol << " Fahrenheit." << endl;
}