









#include <iostream>
using namespace std;

int main()
{
	char light;

	cout << "Enter traffic light (R/Y/G): ";
	cin >> light;

	switch (light)
	{
		case 'R':
		case 'r':
			cout << "Stop";
			break;

		case 'Y':
		case 'y':
			cout << "Get Ready";
			break;

		case 'G':
		case 'g':
			cout << "Go";
			break;

		default:
			cout << "Invalid traffic light";
	}

	return 0;
}


