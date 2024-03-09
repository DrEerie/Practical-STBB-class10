#include <iostream>
using namespace std;

int main(void)
{
	//Declaring variables with float, so we can get the exact result
	float num1, num2, num3, num4, num5, num6, total, average;

	cout << "\t\t CALCULATING THE AVERAGE OF SIX NUMBERS" << endl ;
	cout << "\t\t ======================================\n" << endl ;
	
	//Taking input for six numbers
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter the third number: ";
	cin >> num3;
	cout << "Enter the fourth number: ";
	cin >> num4;
	cout << "Enter the fifth number: ";
	cin >> num5;
	cout << "Enter the sixth number: ";
	cin >> num6;
	
	//summing up the six numbers and then taking average
	total = num1 + num2 + num3 + num4 + num5 + num6;
	average = total/6;
	
	//showing output of total and average of six numbers
	cout << endl;
	cout << "Total of the six numbers is: " << total << endl;
	cout << "Average of the six numbers is: " << average << endl;
	
	return 0;
}
