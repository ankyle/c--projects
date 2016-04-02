// Lab 7.6
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description: Game of War, if tie repeat until there is a winner

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int cardValueComp;
	int cardSuitComp;
	int cardValueHuman;
	int cardSuitHuman;

	// needed for random number
	srand(time(0));
	
	while (true)
	{	
		// generating card value for computer	
		cardValueComp = 2 + (rand() % 13);
		
		// indentifying output statement 
		cout << "The Computer's card is a ";
		
		// computer card value
		if (cardValueComp < 11)
			cout << cardValueComp;	
		else if (cardValueComp == 11)
			cout << "Jack";
		else if (cardValueComp == 12)
			cout << "Queen";
		else if (cardValueComp == 13)
			cout << "King";
		else if (cardValueComp == 14)
			cout << "Ace";
		else if (cardValueComp > 14)
			cout << cardValueComp;
		
		// generating card suit for computer
		cardSuitComp = 0 + (rand() % 3);
		
		if (cardSuitComp == 0)
			cout << " of Spades" << endl;
		else if (cardSuitComp == 1)
			cout << " of Diamonds" << endl;
		else if (cardSuitComp == 2)
			cout << " of Hearts" << endl;
		else if (cardSuitComp == 3)
			cout << " of Clubs" << endl;
		
		// Human
		
		// generating card value for human
		cardValueHuman = 2 + (rand() % 13);
		
		//indentifying output statement
		cout << "The Humans's card is a ";
		
		// human card value
		if (cardValueHuman < 11)
			cout << cardValueHuman; 
		else if (cardValueHuman == 11)
			cout << "Jack";
		else if (cardValueHuman == 12)
			cout << "Queen";
		else if (cardValueHuman == 13)
			cout << "King";
		else if (cardValueHuman == 14)
			cout << "Ace";
		
		// generating card suit for human
		cardSuitHuman = 0 + (rand() % 3);
		
		if (cardSuitHuman == 0)
			cout << " of Spades" << endl;
		else if (cardSuitHuman == 1)
			cout << " of Diamonds" << endl;
		else if (cardSuitHuman == 2)
			cout << " of Hearts" << endl;
		else if (cardSuitHuman == 3)
			cout << " of Clubs" << endl;
		
		// indentifying output statement, results
		if (cardValueComp != cardValueHuman) break;
		
		if (cardValueComp == cardValueHuman) 
			cout << "It's a tie" << endl; 
	}
	
	if (cardValueComp > cardValueHuman) 
			cout << "You Lose" << endl;
		
	if (cardValueComp < cardValueHuman) 
			cout << "You Win" << endl;	
}