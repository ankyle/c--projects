// Lab 8.1
// Programmer: Kyle Anderson
// Editor(s) used: Win 10 Notepad++
// Compiler(s) used: MinGW
// Description: Average of three numbers

#include <iostream> 
#include <iomanip>
using namespace std; 
  
double calcAverage(int a, int b, int c) 
{ 
  double result = 0.0; 
  result = (a + b + c) / 3.0; 
  return result; 
} // calcAverage 
  
int main() 
{ 
 
	int x; 
  int y; 
	int z;
	
	// user input
	cout << "Enter the first whole number:  ";
	cin >> x; 
  cin.ignore(1000, 10);
	
	// user input
	cout << "Enter the second whole number:  ";
	cin >> y; 
  cin.ignore(1000, 10);	
	
	// user input
	cout << "Enter the third whole number:  ";
	cin >> z; 
  cin.ignore(1000, 10);

	// formatting output statement
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	
	// output statement
  double avg = calcAverage(x, y, z); 
  cout << avg << endl; 
} // main 
