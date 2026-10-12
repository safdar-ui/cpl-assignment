#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout << "Enter a character: ";
	cin >> ch;

	if (ch >= 'A' && ch <= 'Z')
		cout << "Uppercase Letter";
	else
		cout << "Not an Uppercase Letter";

	return 0;
}

