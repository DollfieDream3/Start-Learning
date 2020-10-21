#include <iostream>
using namespace std;

int main(){

	// ----------------------------------------------------------------------------------

	// Display header
	cout << "------------ C++ Basic Calculator ------------" << endl;
	
	// ----------------------------------------------------------------------------------
	
	// Variable for choosing if start another calculation
	char c;
	
	// ----------------------------------------------------------------------------------
	
	// Calculator
	do{
		// User Input
		double num1, num2;
		cout << endl << "Enter number 1: ";
		cin >> num1;
		cout << "Enter number 2: ";
		cin >> num2;
	
		// Choose a method
		int method;
		cout << endl << "Enter a number to choose a operation." << endl
		<< "1 for addition." << endl
		<< "2 for subtraction" << endl
		<< "3 for multiplication." << endl
		<< "4 for division." << endl;
		cout << "Choose one method: ";
		cin >> method;
		
		// Calculation and display
		double result;
		switch(method){
			case 1:
				result = num1 + num2;
				cout << endl << "The result is " << result << "." << endl;
				break;
			
			case 2:
				result = num1 - num2;
				cout << endl << "The result is " << result << "." << endl;
				break;
				
			case 3:
				result = num1 * num2;
				cout << endl << "The result is " << result << "." << endl;
				break;
				
			case 4:
				result = num1 / num2;
				cout << endl << "The result is " << result << "." << endl;
				break;
		
		}
		
		// Choose if start a new calculation
		cout << endl << "Continue?" << endl
		<< "Enter Y/y for yes and N/n for no: ";
		cin >> c;

	}while(c == 'y' || c == 'Y');
	
	// ----------------------------------------------------------------------------------
	
	// Display footer
	cout << endl << "Thank you for choosing this basic calculator." << endl;

	// ----------------------------------------------------------------------------------
	
	return 0;

}



/*
Methods used:
1. do...while loop
2. switch
*/
