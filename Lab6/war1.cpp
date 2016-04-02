// Lab 6.8
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description: Game of War

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	// needed for random number
	srand(time(0));
	
	// generating card value for computer
	int cardValueComp;
	cardValueComp = 2 + (rand() % 13);
	
	// indentifying output statement 
	cout << "The Computer's card is a ";
	
	// computer card value
	if (cardValueComp < 11)
		cout << cardValueComp;	
	if (cardValueComp == 11)
		cout << "Jack";
	if (cardValueComp == 12)
		cout << "Queen";
	if (cardValueComp == 13)
		cout << "King";
	if (cardValueComp == 14)
		cout << "Ace";
	if (cardValueComp > 14)
		cout << cardValueComp;
	
	// generating card suit for computer
	int cardSuitComp;
	cardSuitComp = 0 + (rand() % 3);
	
	if (cardSuitComp == 0)
		cout << " of Spades" << endl;
	if (cardSuitComp == 1)
		cout << " of Diamonds" << endl;
	if (cardSuitComp == 2)
		cout << " of Hearts" << endl;
	if (cardSuitComp == 3)
		cout << " of Clubs" << endl;
	
	// Human
	
	// generating card value for human
	int cardValueHuman;
	cardValueHuman = 2 + (rand() % 13);
	
	//indentifying output statement
	cout << "The Humans's card is a ";
	
	// human card value
	if (cardValueHuman < 11)
		cout << cardValueHuman; 
	if (cardValueHuman == 11)
		cout << "Jack";
	if (cardValueHuman == 12)
		cout << "Queen";
	if (cardValueHuman == 13)
		cout << "King";
	if (cardValueHuman == 14)
		cout << "Ace";
	
	// generating card suit for human
	int cardSuitHuman;
	cardSuitHuman = 0 + (rand() % 3);
	
	if (cardSuitHuman == 0)
		cout << " of Spades" << endl;
	if (cardSuitHuman == 1)
		cout << " of Diamonds" << endl;
	if (cardSuitHuman == 2)
		cout << " of Hearts" << endl;
	if (cardSuitHuman == 3)
		cout << " of Clubs" << endl;
	
	// indentifying output statement, results
	if (cardValueComp > cardValueHuman)
		cout << "You Lose" << endl;
	if (cardValueComp < cardValueHuman)
		cout << "You Win" << endl; 
	if (cardValueComp == cardValueHuman)
		cout << "It's a tie" << endl;
	
	
	
}