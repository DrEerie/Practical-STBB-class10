#include <iostream>
using namespace std;
int main( void )
{
       float num;
       cout << "\t\t MULTIPLYING OF A NUMBER UPTO 10" << endl ;
       cout << "\t\t=================================\n" << endl ;
       cout << "Enter a number: ";
       cin >> num;
       for ( int multiple = 1; multiple <=10;  multiple++ )
       {
       	cout << "\t\t\t\t" << num <<" x "<< multiple << " = "<< num * multiple << endl;
	   }
        return 0;
}

