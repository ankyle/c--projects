// Lab 6.7
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description: Guess a number between 1 and 10 with loop

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	// random guess generator 
	srand(time(0));
	int number;
	number = 1 + (rand() % 100);
	
	// code block to read a double value from the keyboard
	int guess;
	cout << "I am thinking of a number between 1 and 100, take a guess   ";
		
	while (true)
	{
	cin >> guess;
	cin.ignore (1000, 10);
	
	// indentifying output statement
				
	if (guess < number)
		cout << guess << "  is too low, guess again   ";
				
	if (guess > number)
		cout << guess << "  is too high, guess again  ";
	
	if (guess == number) break;
		
	} // while
	
	//indentifying output statment
	cout << "That's right, the number is " << number << ".  Thanks for playing" << endl;
} // main