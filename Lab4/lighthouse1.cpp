// Lab 4.2
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
	double heighth = 100;
	double distance = sqrt (.8 * heighth);
	
	// formatting identifying output statements
	cout.setf(ios::fixed);
	cout << setprecision(0);
	
	// identifying output statements
	cout <<"A " << heighth << " foot tall lighthouse can be seen from " << distance << " miles away." << endl;
	
}