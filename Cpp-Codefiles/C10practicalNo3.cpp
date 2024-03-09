#include <iostream>
#include <conio.h>
using namespace std;
int main( void ) {
	
	char ch[10]; //Declared array for 10 characters.

	cout << "\t\t TEN CHARACTERS AS STRING INPUT" << endl ;
	cout << "\t\t ==============================" << endl ;
	cout << "\nNote: You can enter number, alphabet or any special character as a string character" << endl ;
	
	//Now taking input for 10 characters.
	cout << "\nKindly Enter character:\n";
	for (int i = 0; i <= 9; i++){
		ch[i] = getch ();
		cout << ch[i] << endl;
	}
	
	cout << "Ten characters as string are: " << ch;

	return 0;
}

