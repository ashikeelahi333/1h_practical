/*
Greatest number from 3
1. variable declaration
2. input 3 numbers
3. checking for greatest number
4. output
*/

#include <iostream>
using namespace std;

int main() {
	// variable declaration
	double num1, num2, num3;
	
	// input
	cout << "Enter 3 numbers" << endl;
	cin >> num1 >> num2 >> num3;
	
	// checking
	if(num1 > num2 && num1 > num3) {
		cout << "Greatest number is " << num1 << endl;
	} else if(num2 > num3) {
		cout << "Greatest number is " << num2 << endl;
	} else {
		cout << "Greatest number is " << num3 << endl;
	}
}
