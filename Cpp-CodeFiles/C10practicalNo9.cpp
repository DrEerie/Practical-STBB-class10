#include <iostream>
using namespace std;
int main( void )
{
        float fahrenheit, celsius;
        cout << "\t\t CONVERT TEMPRATURE FROM FAHRENHEIT TO CELSIUS"<< endl;
        cout << "\t\t ============================================="<< endl;
        cout << "\nEnter Temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = ( fahrenheit - 32 ) * ( 5.0 / 9.0 );
        cout << "\nThe given temperature in Celsius is :  "<< celsius << endl;
        
        return 0;
}

