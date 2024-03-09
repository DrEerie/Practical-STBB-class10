#include <iostream>
using namespace std;
int main( void )
{
       int length, width, area;
       cout << "\t\t CALCULATING AREA OF A RECTANGLE"<< endl;
       cout << "\t\t ===============================\n"<< endl;
       cout << "Enter the length of a rectangle in cm  :  ";
       cin >> length;
       cout << "Enter the width of a rectangle in cm :  ";
       cin >> width;
       area= length*width ;
       cout << "\nThe Area of a Rectangle in Sq.cm  is :  "<< area<< endl;
       return 0;
}

