#include <iostream>
using namespace std;

int main(void)
{
	cout << "\t\tChecking WHETHER A NUMBER IS +VE, -VE or ZERO" << endl;
	cout << "\t\t=============================================\n" << endl;
	
	//Declaring variable and taking input for a number
	float num;
	cout << "Enter a number: ";
	cin >> num;
	
	//Checking the number and printing the result
	if (num > 0){
		cout << "\nThe given number is POSITIVE.";
	}
	else if (num < 0){
		cout << "\nThe given number is NEGATIVE.";
	}
	else{
		cout << "\nThe given number is ZERO.";
	}
	
	return 0;
}
