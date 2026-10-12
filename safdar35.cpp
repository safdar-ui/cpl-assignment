
#include <iostream>
using namespace std;

int main()
{
	int choice;
	float temp;

	cout << "1. Celsius to Fahrenheit\n";
	cout << "2. Fahrenheit to Celsius\n";
	cout << "Enter choice: ";
	cin >> choice;

	switch (choice)
	{
		case 1:
			cout << "Enter Celsius: ";
			cin >> temp;
			cout << "Fahrenheit = "
				 << (temp * 9 / 5) + 32;
			break;

		case 2:
			cout << "Enter Fahrenheit: ";
			cin >> temp;
			cout << "Celsius = "
				 << (temp - 32) * 5 / 9;
			break;

		default:
			cout << "Invalid choice";
	}

	return 0;
}


