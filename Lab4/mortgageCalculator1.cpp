// Lab 4.1
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description:  Program calculates monthly payment for amount owed over a 30 year period

#include <cmath> 
#include <iomanip>
#include <iostream>

using namespace std;

int main()

{
	int P = 350000;  // amount to be borrowed
	float R = .032; // interest rate
	int N = 360; // monthly payments in payback period
	
	float Y = N / 12; // months to years
	
	float S = P * (pow (1 + R / 12, N) * R / 12) / ((pow (1 + R / 12, N) - 1));
	
	// identifying output statements
	cout << "Amount borrowed = " << P << endl;
	cout << "Annual interest rate = " << R * 100 << "%" << endl;
	cout << "Payback period = " << Y << " years" << endl;
	
	// formatting identifying output statements
	cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2);

	// identifying output statements
	cout << "Monthly payment = $" << S << endl;
}