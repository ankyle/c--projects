// Lab 5.5
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description:  Calculates the amount you would save in a savings account with interest over a time period

#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

int main()
{
  
  // code block to read a int value from the keyboard
  int years;
  cout << "As a whole number, enter the number of years until retirement: ";
  cin >> years;
  cin.ignore(1000,10);
  
  // code block to read a int value from the keyboard
  int D;
  cout << "Amount deposited into your savings each month: ";
  cin >> D;
  cin.ignore(1000,10);
  
  // code block to read a double value from the keyboard
  double i;
  cout << "The expected annual interest rate, example 3.85% as 3.85: ";
  cin >> i;
  i = i / 100;
  cin.ignore(1000,10);
  
  // calculations
  double p = i / 12; // 0.01% annual interest rate, I need a new bank
  double T = years * 12;
  double S = D * ((pow(1 + p, T) - 1) / p);

  // echoing input values, unformatted, identifying output statement 
  cout << "In " << years << " years at " << i * 100 << "%, $" ; 
  cout << D << " deposited per month will grow to $";
  
  // formatting output
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2);
  
  // identifying output statement 
  cout << S << "." << endl;
}