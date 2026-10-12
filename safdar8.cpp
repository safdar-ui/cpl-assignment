#include <iostream>
using namespace std;

int main()
{
	float amount, discount, total;

	cout << "Enter shopping amount: ";
	cin >> amount;

	if (amount < 0)
		cout << "Invalid amount";
	else if (amount >= 10000)
	{
		discount = amount * 0.20;
		total = amount - discount;
		cout << "Discount = Rs. " << discount << endl;
		cout << "Final Amount = Rs. " << total;
	}
	else if (amount >= 5000)
	{
		discount = amount * 0.10;
		total = amount - discount;
		cout << "Discount = Rs. " << discount << endl;
		cout << "Final Amount = Rs. " << total;
	}
	else
	{
		cout << "No discount" << endl;
		cout << "Final Amount = Rs. " << amount;
	}

	return 0;
}

