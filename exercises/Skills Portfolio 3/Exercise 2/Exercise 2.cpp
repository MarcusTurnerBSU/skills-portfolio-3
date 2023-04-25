#include <iostream>
using namespace std;

int Sum(int num1, int num2);

int main() {
	int firstNumber;
	int secondNumber;
	//char option; giving the user an option to quit at any time

	//while loop as we don't know when the user will leave the program 
	//while(option != 'Y') { 
	//cin.clear;
	//cin.ignore(1000, '\n');
	//cin.option;

	//printing out what the user should do and storing their inputs
		cout << "Enter two numbers to be added together:" << endl;
		cin >> firstNumber;
		cin >> secondNumber;

	//the addition of the numbers they selected
	int Sum(int num1, int num2); {
		int total = firstNumber + secondNumber;
		cout << "\nYou have selected numbers: " << firstNumber 
			<< " & " << secondNumber << endl;
		cout << "The total sum is: " << total << endl;
	}
		
	return 0;
}

int Sum(int num1, int num2) { //delarcing function and passing through two numbers as parameters
	int total = num1 + num2;

return 0;
}

