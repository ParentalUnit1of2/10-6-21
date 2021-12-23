#include <iostream>
using namespace std;

int main()
{
	//Use enters integer number
	//Program write out if that number is even or odd

	//  % - modulus (MOD) operator - or remainder operator

	int number;
	cout << "Please enter whole number: ";
	cin >> number;
	if (number % 2 == 0) // == is used to check equality
	{
		cout << "You have entered even number." << endl;
	}
	else
	{
		cout << "You have entered odd number." << endl;
	}

	cout << "Thank you brah";
	system("pause>0");
}