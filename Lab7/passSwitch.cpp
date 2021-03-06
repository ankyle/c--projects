// Lab 7.1
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description:  Checks if you passed using switch logic

#include <iostream> 
using namespace std; 
  
int main() 
{ 
  // read a grade from the keyboard 
	char grade;
  cout << "What is your grade? [A, B, C, D, or F]: "; 
  cin >> grade; 
  cin.ignore(1000, 10); 
	
  switch (grade)
  {  // start here with switch OFF
    case 'A':                               // if grade is 'A', turn switch ON
    case 'a':                               // if grade is 'a', turn switch ON
    case 'B':                               // if grade is 'B', turn switch ON  
    case 'b':                               // if grade is 'b', turn switch ON  
    case 'C':                               // if grade is 'C', turn switch ON  
    case 'c':                               // if grade is 'c', turn switch ON  
      cout << "You pass" << endl;            // do this if switch is ON  
      break;                                // skip to closing curly-brace if switch is ON, output statement 
    case 'D':                               // if grade is 'D', turn switch ON  
    case 'F':                               // if grade is 'F', turn switch ON  
    case 'd':                               // if grade is 'd', turn switch ON  
    case 'f':                               // if grade is 'f', turn switch ON  
      cout << "You do not pass" << endl;  // do this if switch is ON  
      break;                                // skip to closing curly-brace if switch is ON
    default:                                // turn switch ON  
      cout << "Invalid entry " << grade << endl; // do this if switch is ON, output statement 
  }                                         // this is the closing curly-brace  
} 
