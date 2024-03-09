#include <iostream>
using namespace std;

int main(void)
{
	//Declaring variables with float, so we can get the exact result.
	float num1, num2, sum, subt, multi, div;
	
	cout << "\t\t ARITHMETIC OPERATIONS ON TWO NUMBERS" << endl ;
	cout << "\t\t ====================================\n" << endl ;
	
	//Taking input of two numbers.
	cout << "\t\tEnter the first number: " ;
	cin >> num1;
	cout << "\t\tEnter the second number: " ;
	cin >> num2;
	
	//Performing  Arithmetic operations.
	sum = num1 + num2;
	subt = num1 - num2;
	multi = num1 * num2;
	div = num1 / num2;
	
	//Printing the results of arithmetic operations.
	cout << endl;
	cout << "The sum of the two numbers results: " << sum << endl;
	cout << "The subtraction of the two numbers results: " << subt << endl;
	cout << "The multiplication of the two numbers results: " << multi << endl;
	cout << "The division of the two numbers results: " << div << endl;
	
	return 0;
}
