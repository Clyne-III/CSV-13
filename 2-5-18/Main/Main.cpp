// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "myClass1.h"
#include "myclass2.h"
#include "myclass3.h"
using namespace std;


int main()
{
	myClass1 Division;
	myClass2 Sub;
	myclass3 Multi;
	float ans,num1,num2;
	int mode;

	cout << "Press 1 for Subtraction." << endl;
	cout << "Press 2 for Multiplication." << endl;
	cout << "Press 3 for Division." << endl;
	cin >> mode;

	switch (mode)
	{
	case 1:
		for (int i = 0; i < 3; i++)
		{
			cout << "Enter First number" << endl;
			cin >> num1;
			cout << "Subtract by" << endl;
			cin >> num2;
			Sub.mySubtraction1(num1, num2);
		}
		break;
	case 2:
		for (int i = 0; i < 3; i++)
		{
			cout << "Enter First number" << endl;
			cin >> num1;
			cout << "Multiply by" << endl;
			cin >> num2;
			Multi.multiply(num1, num2);
		}
		break;
	case 3:
		for (int i = 0; i < 3; i++)
		{
			cout << "Enter First number" << endl;
			cin >> num1;
			cout << "Divide by" << endl;
			cin >> num2;
			Division.Divide(num1, num2);
		}
		break;
	}

	/*for (int i = 0; i < 3; i++) 
	{
		cout << "Enter First number" << endl;
		cin >> num1;
		cout << "Divide by" << endl;
		cin >> num2;
		Division.Divide(num1, num2);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter First number" << endl;
		cin >> num1;
		cout << "Subtract by" << endl;
		cin >> num2;
		Sub.mySubtraction1(num1, num2);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter First number" << endl;
		cin >> num1;
		cout << "Multiply by" << endl;
		cin >> num2;
		Multi.multiply(num1, num2);
	}*/


    return 0;
}

