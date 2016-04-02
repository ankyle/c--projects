// Lab 5.2
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description: Program calculates the distance in miles away that a boat could see a light house at sea

#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

int main()
{
	
	// code block to read a double value from the keyboard
	double heighth;
	cout << "What's the lighthouse height in feet? ";
	cin >> heighth;
	cin.ignore(1000, 10);
	
	// distance calculation
	double distance = sqrt (.8 * heighth);
	
	// indentifying output statement
	cout <<"A " << heighth << " foot tall lighthouse can be seen from ";
	
	// formatting output
	cout.setf(ios::fixed);
	cout << setprecision(0);
	
	// indentifying output statement
	cout << distance << " miles away." << endl;
	
}