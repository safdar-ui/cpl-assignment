
#include <iostream>
using namespace std;

int main()
{
	int choice;
	float balance = 10000, amount;

	cout << "1. Check Balance\n";
	cout << "2. Deposit\n";
	cout << "3. Withdraw\n";
	cout << "Enter choice: ";
	cin >> choice;

	switch (choice)
	{
		case 1:
			cout << "Balance = Rs. " << balance;
			break;

		case 2:
			cout << "Enter deposit amount: ";
			cin >> amount;

			if (amount > 0)
				cout << "New Balance = Rs. "
					 << balance + amount;
			else
				cout << "Invalid amount";
			break;

		case 3:
			cout << "Enter withdrawal amount: ";
			cin >> amount;

			if (amount <= 0)
				cout << "Invalid amount";
			else if (amount > balance)
				cout << "Insufficient balance";
			else
				cout << "Remaining Balance = Rs. "
					 << balance - amount;
			break;

		default:
			cout << "Invalid choice";
	}

	return 0;
}




