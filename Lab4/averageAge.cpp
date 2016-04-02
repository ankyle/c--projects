// Lab 4.4
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description: The program calculates the average age of 3 ages. 

#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int age1 = 19;
	int age2 = 21;
	int age3 = 30;
	double ages = 0;
	
	ages = age1 + age2;
	ages = ages + age3;
	ages = ages / 3;
	
	// identifying output statements
	cout << "The average of the three ages is " ;
	
	// formatting output
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	
	// identifying output statements
	cout << ages <<  endl;
}
	