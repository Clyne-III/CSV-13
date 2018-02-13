// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"
using namespace std;


int main()
{
	Addition Add;
	Subtraction Sub;
	Multiplication Multi;
	Division Div;
	float ans, num1, num2;
	int mode;

	cout << "Press 1 for Addition" << endl;
	cout << "Press 2 for Subtraction." << endl;
	cout << "Press 3 for Multiplication." << endl;
	cout << "Press 4 for Division." << endl;
	cin >> mode;

	switch (mode)
	{
	case 1:
		for (int i = 0; i < 3; i++)
		{
			cout << "Enter First number" << endl;
			cin >> num1;
			cout << "Add by" << endl;
			cin >> num2;
			Add.Add(num1, num2);
		}
		break;
	case 2:
		for (int i = 0; i < 3; i++)
		{
			cout << "Enter First number" << endl;
			cin >> num1;
			cout << "Subtract by" << endl;
			cin >> num2;
			Sub.Subtract(num1, num2);
		}
		break;
	case 3:
		for (int i = 0; i < 3; i++)
		{
			cout << "Enter First number" << endl;
			cin >> num1;
			cout << "Multiply by" << endl;
			cin >> num2;
			Multi.Multiply(num1, num2);
		}
		break;
	case 4:
		for (int i = 0; i < 3; i++)
		{
			cout << "Enter First number" << endl;
			cin >> num1;
			cout << "Divide by" << endl;
			cin >> num2;
			Div.Divide(num1, num2);
		}
		break;
	}
	return 0;
}

