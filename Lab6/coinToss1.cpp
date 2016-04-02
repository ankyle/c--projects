// Lab 6.5
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description: Coin Toss, heads or tails

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));
	int flip;
	
	flip = 1 + (rand() % 2);
	
	// indentifying output statements
	if (flip == 1)
		cout << "Heads" << endl;
	else
		cout << "Tails" << endl;
	
}