// Lab 6.2
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description: Password protected mortgage calculator

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

#include <cmath>

int main()
{
	// code block to read a int value from the keyboard
	while (true) 
  { 
	string password;
	cout << "Enter your password:  ";
	getline(cin,password);
  
    if (password == "P@ssw0rd!") break; 
  } // while 
  
  cout << "        " << endl;
  cout << "        " << endl;
  cout << "Access Granted" << endl;
  cout << "       " << endl;
  cout << "Welcome" << endl;
  cout << "        " << endl;
  cout << "        " << endl;
	

	// input values
	int years = 10;
	int D = 100;

	// calculations
	double p = 0.075 / 12; // 7.5% annual interest rate
	double T = years * 12;
	double S = D * ((pow(1 + p, T) - 1) / p);

	// echoing input values, unformatted
	cout << "In " << years << " years, $";
	cout << D << " deposited per month will grow to $";

	// formatting output (see 4.2)
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << S << "." << endl;
}