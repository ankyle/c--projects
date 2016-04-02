// Lab 6.6
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description: Guess a number between 1 and 10 

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));
	int number;
	
	number = 1 + (rand() % 10);
	
	// code block to read a double value from the keyboard
	int guess;
	cout << "I am thinking of a number between 1 and 10, take a guess   ";
	cin >> guess;
	cin.ignore (1000, 10);
	
	// indentifying output statement
	if (guess == number)
		cout << "That's right, the number is " << number <<  endl;
	if (guess < number)
		cout << "That's too low, the number is " << number << endl;
	if (guess > number)
		cout << "That's too high, the number is " << number << endl;
	if (guess > 10)
		cout << "Your number is too high, I said a number between 1 and 10" << endl;
	
}