// Lab 8.2
// Programmer: Kyle Anderson
// Editor(s) used: Win 10 Notepad++
// Compiler(s) used: MinGW
// Description: 5 math problems

#include <iostream> 
#include <ctime>
#include <cstdlib>
using namespace std; 
  
void additionProblem(int topNumber, int bottomNumber) 
{ 
  int userAnswer; 
  cout << "\n\n\n      " << topNumber << " + " << bottomNumber << " = "; // indentifying output statements
  cin >> userAnswer; 
  cin.ignore(1000, 10); 
  
  int theAnswer = topNumber + bottomNumber; 
  if (theAnswer == userAnswer) 
    cout << "      Correct!" << endl; // indentifying output statements
  else 
    cout << "      Very good, but a better answer is " << theAnswer << endl; // indentifying output statements

} // additionProblem 
  
int main() 
{ 
	srand(time(0));
	int a, b;
	int i = 0;
	
	while (true)
	{
		if (i == 5) break; // counter break after 5
		a = 1 + (rand() % 10);
  	b = 1 + (rand() % 10);
		i = i + 1;
		additionProblem(a, b); 
	} //while
} // main 
