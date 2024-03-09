#include <iostream>
#include <algorithm>
using namespace std;
int main( void )
{
	int num[10];
    cout << "\t\t\t ASCENDING ORDER SORTING" << endl;
    cout << "\t\t\t ========================\n" << endl;
    
    //taking input from user
	cout << "Enter any 10 Numbers :  ";     
	for (int i=0; i<=9; i++ ){
    	cin >> num[ i ];
    	cout << "\t\t\t";
    }
    
    //sorting and then showing output.
	sort ( num, num+10 );
    cout <<"\nSo the ascending order of the given numbers is:";
    for (int i=0; i<=9; i++ ){
    	cout <<"\n\t\t\t\t\t\t"<< num[i];
    }
	return 0;    
}
