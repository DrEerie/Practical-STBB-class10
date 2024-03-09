#include <iostream>
using namespace std;
int main( void )
{
        float Lcm, Lmeter;
        cout << "\t\t CONVERT LENGTH IN CENTIMETER INTO METER"<< endl ;
        cout << "\t\t =======================================\n"<< endl;
        cout << "Enter length in Centimeter :  ";
        cin >> Lcm;
        Lmeter = Lcm / 100 ;
        cout << "\nThe given length in meters is :  "<< Lmeter <<" m" << endl;
        return 0;
}

