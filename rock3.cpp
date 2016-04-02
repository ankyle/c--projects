// Lab Mid Term
// Programmer: Kyle Anderson
// Editor(s) used: Win 10 Notepad++
// Compiler(s) used: MinGW
// Description: Rock Paper Scissors
// some bsearch

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
  // initialize the computer's random number generator
	srand(time(0));
	
  // declare variables
	char humanChoice = '0';
	int humanSelection;
	int compChoice;
	char compSelection = '0';
		
  // start loop

	
	while (humanChoice != 'r' && humanChoice != 'R' &&  
		humanChoice !=	's' && humanChoice != 'S' && 
		humanChoice !=	'p' && humanChoice != 'P' &&
		humanChoice != 'q' && humanChoice != 'Q')
		
	{
		humanChoice = '0';

		compChoice = 1 + (rand() % 3); 
		humanSelection = '0';
		
		if (compChoice == 1)
			compSelection = 'R';
		if (compChoice == 2)
			compSelection = 'P';
		if (compChoice == 3)
			compSelection = 'S';
		// prompt for, and read, the human's choice, input validation
		cout << "Choose: [Rock, Paper, Scissors, Quit]:  "; 
		cin >> humanChoice;
		cin.ignore(1000,10);
		
		
		// if human wants to quit, break out of loop 
		if (humanChoice == 'q' || humanChoice == 'Q')  
		{
			humanSelection = '5';
			cout << " Thanks for playing" << endl;
			break;
		}
		
		if (humanChoice == 'R' || humanChoice == 'r') { //rock
			humanSelection = 1;
		}
		else if (humanChoice == 'p' || humanChoice == 'P') { //paper
			humanSelection = 2;
		}
		else if (humanChoice == 's' || humanChoice == 'S') { //scissors
			humanSelection = 3;
		}
		
		// determine the winner, output statemenmts 
		if (humanSelection == compChoice) { //tie
			cout << "Computer: " << compSelection << " Human: " << humanChoice  << " Tie" << endl; 
		}
		else if (humanSelection == 1 && compChoice == 2) { //rock versus paper
			cout << "Computer: " << compSelection << " Human: " << humanChoice << " Computer Wins" << endl;
		}
		else if (humanSelection == 1 && compChoice == 3) { //rock versus Scissors
			cout << "Computer: " << compSelection << " Human: " << humanChoice << " Human Wins" << endl;
		}
		else if (humanSelection == 2 && compChoice == 1) { // paper versus rock
			cout << "Computer: " << compSelection << " Human: " << humanChoice << " Human Wins" << endl;	
		}
		else if (humanSelection == 2 && compChoice == 3) { //paper versus scissors
			cout << "Computer: " << compSelection << " Human: " << humanChoice << " Computer Wins" << endl;
		}
		else if (humanSelection == 3 && compChoice == 1) { //scissors versus rock
			cout << "Computer: " << compSelection << " Human: " << humanChoice << " Computer Wins" << endl;	
		}
		else if (humanSelection == 3 && compChoice == 2) { //scissors versus paper
			cout << "Computer: " << compSelection << " Human: " << humanChoice << " Human Wins" << endl;
			}		
	} // end loop
} // end program