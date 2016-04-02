// Lab 8.5
// Programmer: Kyle Anderson
// Editor(s) used: Win 10 Notepad++
// Compiler(s) used: MinGW
// Description: Three math questions from 6.1

#include <iostream> 
using namespace std; 
  
void additionProblem(int topNumber, int bottomNumber) 
{ 
	int userAnswer; 
  cout << "\n\n\n      " << topNumber << " + " << bottomNumber << " = "; 
  cin >> userAnswer; 
  cin.ignore(1000, 10); 
	
	
  int theAnswer = topNumber + bottomNumber; 
  if (theAnswer == userAnswer) 
    cout << "Good work - your answer is correct!" << endl; 
  else 
    cout << "Incorrect, the answer is " << theAnswer << endl; 

} // additionProblem 
  
int main() 
{ 
  additionProblem(1, 2); 
  additionProblem(100, 99); 
  additionProblem(12, 21); 
} // main 
