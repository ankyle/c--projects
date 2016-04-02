// Lab 6.1
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description:  Three math problems that identify correct and incorrect answers 

#include <iostream> 
using namespace std; 
  
int main() 
{
	// code block to read a int value from the keyboard
	int answer1; 
	cout << endl << endl << endl << endl; 
	cout << "       1" << endl; 
	cout << "      +2" << endl; 
	cout << "      --" << endl; 
	cout << "      "; 
	cin >> answer1; 
	cin.ignore(1000, 10); 
		
	// identifying output statement 
	cout << "      "; 
	if (answer1 == 3) 
		cout << "Good work - your answer is correct!" << endl; 
	else  // 
		cout << "Incorrect, the answer is 3" << endl; 
	
	// code block to read a int value from the keyboard
	int answer2; 
	cout << endl << endl << endl << endl; 
	cout << "       100" << endl; 
	cout << "      -99" << endl; 
	cout << "      --" << endl; 
	cout << "      "; 
	cin >> answer2; 
	cin.ignore(1000, 10); 
	
	// identifying output statement 
	cout << "      "; 
	if (answer2 == 1) 
		cout << "Good work - your answer is correct!" << endl; 
	else  // see 6.3
		cout << "Incorrect, the answer is 1" << endl; 	
	
	// code block to read a int value from the keyboard
	int answer3; 
	cout << endl << endl << endl << endl; 
	cout << "       12" << endl; 
	cout << "      +21" << endl; 
	cout << "      --" << endl; 
	cout << "      "; 
	cin >> answer3; 
	cin.ignore(1000, 10); 

	// identifying output statement 
	cout << "      "; 
	if (answer3 == 33) 
		cout << "Good work - your answer is correct!" << endl; 
	else  
		cout << "Incorrect, the answer is 33" << endl; 	
	
}