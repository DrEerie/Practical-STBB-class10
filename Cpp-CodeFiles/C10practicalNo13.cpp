#include <iostream>
using namespace std;
int main( void )
{
    int num, fact=1;
    cout << "\t\t\t Factorial of a Number" << endl;
    cout << "\t\t\t =====================\n" << endl;
    cout << "Enter Positive Integer Number: ";
    cin >> num;
    for( int a=1; a <= num; a++ )
    {
        fact = fact*a;
    }
	cout << "\nFactorial of a Given Number is:  "<<fact << endl;
    return 0;
}

