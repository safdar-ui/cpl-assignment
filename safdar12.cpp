
#include <iostream>
using namespace std;

int main()
{
	float salary, bonus;
	int years;

	cout << "Enter salary: ";
	cin >> salary;

	cout << "Enter years of service: ";
	cin >> years;

	if (salary < 0 || years < 0)
		cout << "Invalid Input";
	else if (years >= 10)
		bonus = salary * 0.20;
	else if (years >= 5)
		bonus = salary * 0.10;
	else
		bonus = salary * 0.05;

	if (salary >= 0 && years >= 0)
		cout << "Bonus = Rs. " << bonus;

	return 0;
}*/
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	if (num > 0)
		cout << "Positive Number";

	return 0;
}
/*


