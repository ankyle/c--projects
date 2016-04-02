// Lab 7.4
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description: Coin Toss multiple times with nested loop, heads or tails 

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	while (true)
	{
	srand(time(0));
	int flip;
	int throws;
	int i = 0;  
	// reading input from user
	cout << "Enter the number of tosses to perform: "; 
	cin >> throws;
	cin.ignore (1000, 10);
	if (throws == 0) break; // break from loop based on user input
		while (true)
		{
			if (throws == i) break;  //break from loop based on count 
			
			flip = 1 + (rand() % 2);
		
			// indentifying output statements
			if (flip == 1)
				cout << "Heads" << endl;
			else
				cout << "Tails" << endl;
			i = i + 1;
		} // while
	}
}