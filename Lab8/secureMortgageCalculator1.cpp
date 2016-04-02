// Lab 8.3
// Programmer: Kyle Anderson
// Editor(s) used: Win 10 Notepad++
// Compiler(s) used: MinGW
// Description: Password Protected Program calculates monthly payment for a mortgage over time

#include <cmath> 
#include <iomanip>
#include <iostream>

using namespace std;

void getPassword(); 

void getPassword() 
{ 
  while (true) 
  { 
    string password; 
    cout << "Enter the password: "; 
    getline(cin, password); 
  
    if (password == "Rumpelstiltskin") break; 
    cout << "INVALID. \n"; 
  } // while 
} // getPassword 

int main()

{
	
	getPassword();
	// code block to read dollar amount borrowed, whole number
	int P; // amount to be borrowed
	cout << "Enter the amount borrowed: "; 
	cin >> P ;
	cin.ignore(1000, 10);
	
	// code block to read annual percent interest rate
	float R; // interest rate
	cout << "Enter your annual interest rate, example 5.85% as 5.85 or 6% as 6: ";  
	cin >> R;
	cin.ignore(1000, 10);
	R = R / 100; // formating APR for math
	
	int N = 360; // monthly payments in payback period
	float Y = N / 12; // months to years
	
	// math
	float S = P * (pow (1 + R / 12, N) * R / 12) / ((pow (1 + R / 12, N) - 1));
	
	// identifying output statement 
	cout << "Amount borrowed = " << P << endl;
	cout << "Annual interest rate = " << R * 100  << "%" << endl;
	cout << "Payback period = " << Y << " years" << endl;
	
	// formatting output
	cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2);
	
	// identifying output statement 
	cout << "Monthly payment = $" << S << endl;
}


