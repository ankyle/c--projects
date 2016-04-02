// Lab 4.3
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description:  Calculates the amount you would save in a savings account with interest over 30 years. 

#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

int main()
{
  // input values
  int years = 30;
  int D = 100;
  double i = 3; 

  // calculations
  double p = .03 / 12; // 3% annual interest rate
  double T = years * 12;
  double S = D * ((pow(1 + p, T) - 1) / p);

  // echoing input values, unformatted, identifying output statements
  cout << "In " << years << " years at " << i << "%, $" ; 
  cout << D << " deposited per month will grow to $";
  
  // formatting identifying output statements
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2);
  
  // identifying output statements
  cout << S << "." << endl;
}