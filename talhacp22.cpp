#include <iostream>
using namespace std;

int main() {
    float marks, test;
    cout << "Enter intermediate percentage: ";
    cin >> marks;

    if (marks >= 60) {
        cout << "Enter entry test score percentage: ";
        cin >> test;
        if (test >= 50) {
            cout << "Meets the sample admission criteria.";
        } else {
            cout << "Entry test score is too low.";
        }
    } else {
        cout << "Intermediate percentage is too low.";
    }

    return 0;
}

