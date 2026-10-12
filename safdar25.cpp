

#include <iostream>
using namespace std;

int main()
{
	float amount, discount, total;

	cout << "Enter shopping amount: ";
	cin >> amount;

	if (amount >= 5000)
	{
		discount = amount * 0.10;
		total = amount - discount;
		cout << "Discount = " << discount << endl;
		cout << "Final Amount = " << total;
	}
	else
	{
		cout << "No Discount" << endl;
		cout << "Final Amount = " << amount;
	}

	return 0;
}


