#include <iostream>
using namespace std;
int main( void )
{
	//used float to declare variable so that i won't terminate decimal values of marks
	float Eng, Urdu, Isl, Phy, Chem, Maths, Comp, Total, Perc;
	
	cout << "\t\t CALCULATION OF TOTAL MARKS, PERCETAGE AND GRADE" << endl ;
	cout << "\t\t ===============================================" << endl ;
	cout << "\t\t\nNote: You can enter total marks out of 100 for each subject.\n" << endl ;
	
	//Now taking input for marks of all 7 subjects.
	cout << "Enter the marks obtained in English: ";
	cin >> Eng;
	cout << "Enter the marks obtained in Urdu: ";
	cin >> Urdu;
	cout << "Enter the marks obtained in Islamiat: ";
	cin >> Isl;
	cout << "Enter the marks obtained in physics: ";
	cin >> Phy;
	cout << "Enter the marks obtained in Chem: ";
	cin >> Chem;	
	cout << "Enter the marks obtained in Maths: ";
	cin >> Maths;
	cout << "Enter the marks obtained in Computer: ";
	cin >> Comp;
	
	//Now calculating the total obtained marks.
	Total = Eng + Urdu + Isl + Phy + Chem + Maths + Comp;
	cout << "\nTotal obtained marks: " << Total << "/700" << endl;
	
	//Now Calculating average percentage
	Perc = (Total*100)/700;
	cout << "Percentage: " << Perc << endl;
	
	//Now calculating grade according to obtained percentage.
	if (Perc <= 100 && Perc >= 80){
		cout << "Grade: A+";
	}
	else if (Perc <= 80 && Perc >= 70){
		cout << "Grade: A";
	}
	else if (Perc <= 70 && Perc >= 60){
		cout << "Grade: B";
	}
	else if (Perc <= 60 && Perc >= 50){
		cout << "Grade: C";
	}
	else if (Perc <= 50 ){
		cout << "Grade: F \nBest of Luck for Next Time";
		//Below 50% will be considered fail.
	}
	else{
		cout << "Given percentage isn't between 1-100.\nSo Grade can't be calculated.";
	}
	
	return 0;
}	

