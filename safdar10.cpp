#include <iostream>
using namespace std;

int main()
{
	int marks;

	cout << "Enter your marks: ";
	cin >> marks;

	if (marks < 0 || marks > 100)
		cout << "Invalid Marks";
	else if (marks >= 80)
		cout << "Excellent Eligibility";
	else if (marks >= 70)
		cout << "Good Eligibility";
	else if (marks >= 50)
		cout << "Eligible";
	else
		cout << "Not Eligible";

	return 0;
}


