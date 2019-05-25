#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	
	int choice, b, c;
	char y;
	bool abort = false;
	
	cout << "MENU: \n";
	cout << "   1. Add";
	cout << "\n   2. Subtract";
	cout << "\n   3. Multiply";
	cout << "\n   4. Divide";
	cout << "\n   5. Modulus \n";
	
	do
	{
		cout << "\nEnter your choice: ";
		cin >> choice;
			while (choice!=1 && choice!=2 && choice!=3 && choice!=4 && choice!=5)
		{
		cout << "You must enter a number between 1 to 5. \n";
		cout << "\nEnter your choice: ";
		cin >> choice;
		}
		cout << "Enter your two numbers: ";
		cin >> b >> c;
	
		switch(choice)
		{
			case 1:
				cout << "Result: " << (b + c) << endl;
				break;
			case 2: 
				cout << "Result: " << (b - c) << endl;
				break;
			case 3:
				cout << "Result: " << (b * c) << endl;
				break;
			case 4:
				cout << "Result: " << (b / c) << endl;
				break;
			case 5:
				cout << "Result: " <<  b % c << endl;
				break;
		}
	
		cout << "\nEnter y to continue.";
		cout << "\nContinue? ";
		cin >> y;
		
			} while (y == 'y' || y == 'Y');
			(!abort);
			
	_getch();
	return 0;
	
}
