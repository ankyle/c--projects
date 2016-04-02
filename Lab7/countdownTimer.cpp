// Lab 7.2
// Programmer: Kyle Anderson
// Editor(s) used: Win 7 Notepad++
// Compiler(s) used: MinGW
// Description:  Count down from 10 to 0 then blasts off

#include <iomanip> 
#include <iostream> 
using namespace std;
 
#ifdef _WIN32 
#include <windows.h> 
#else 
#include <unistd.h> 
#endif 
  
int main() 
{ 
	cout.fill(' '); 
    
	for (int sec = 10; sec > 0; sec--) 
    { 
			cout << setw(2) << sec << ' '; 
			cout.flush(); 

			#ifdef _WIN32 
			Sleep(1000); // one thousand milliseconds
			#else 
			sleep(1); // one second 
			#endif 
  
      cout << '\r'; // CR 
    } 
	// indentifying output statement 
	cout << "0 blast off!" << endl;
    
  
} // main 
