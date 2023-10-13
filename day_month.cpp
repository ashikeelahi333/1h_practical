/*
Day month
1. Variable declaration
2. Input day
3. Calculation
4. Output
*/

#include <iostream>
using namespace std;

int main() {
	// Variable declaration
	int days, month;
	
	// Input day
	cout << "Input day" << endl;
	cin >> days;
	
	// Calculation
	month = days / 30;
	days = days % 30;	
	
	// Output
	cout << "Month: " << month << endl;
	cout << "Days: " << days << endl;
}
