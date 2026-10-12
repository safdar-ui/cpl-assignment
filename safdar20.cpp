
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;

	if (a > b)
		cout << "Greater Number = " << a;
	else
		cout << "Greater or Equal Number = " << b;

	return 0;
}

