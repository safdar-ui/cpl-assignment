 
	include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;

	if (num % 2 == 0 && num % 5 == 0)
		cout << "Divisible by both 2 and 5";
	else if (num % 2 == 0)
		cout << "Even number";
	else if (num % 5 == 0)
		cout << "Divisible by 5";
	else
		cout << "Neither divisible by 2 nor 5";

	return 0;

}       

             
