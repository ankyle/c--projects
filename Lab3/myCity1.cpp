// Lab 3.3
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description:  Outputes high remperatures for a 5 day period

#include <string>
#include <iostream>
using namespace std;

int main()
{
	int thursdayTemp = 63;
	int fridayTemp = 60;
	int saturdayTemp = 65;
	int sundayTemp = 70;
	int mondayTemp = 73;
	string header = "Oakley, CA forcast high temperatures:";
	string source = "Source: weather.com via google.com";
	
	// indentifying output statement
	cout << header << endl;
	cout << "Thursday, February 18, the high will be " << thursdayTemp << " degrees" << endl;
	cout << "Friday, February 19, the high will be " << fridayTemp << " degrees" << endl;
	cout << "Saturday, February 20, the high will be " << saturdayTemp << " degrees" << endl;
	cout << "Sunday, February 21, the high will be " << sundayTemp << " degrees" << endl;
	cout << "Monday, February 22, the high will be " << mondayTemp << " degrees" << endl;
	cout << source << endl;	
}