// Lab 3.5
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description: Calculates days I have lived

#include <string>
#include <iostream>
using namespace std;

int main()
{
	string dob = "June 17 1983";
	string due = "February 18 2016";
	
	int days = 0;
	int years = 32;
	int leapYears = 8;
	int daysInCurrentYearAfterBDay = 246;
		
	// calculations
	days = 365 * years;
	days = days + leapYears;
	days = days + daysInCurrentYearAfterBDay;
		
	// indentifying output statements 
	cout <<"DOB: " << dob << endl;
	cout << "Due: " << due << endl;
	cout << "Age: " << days << endl;
	
}