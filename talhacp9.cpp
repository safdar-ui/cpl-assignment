#include <iostream>
using namespace std;

int main() {
    float marks;
    cout << "Enter marks out of 100: ";
    cin >> marks;

    if (marks >= 50) {
        cout << "Pass";
    } else {
        cout << "Fail";
    }

    return 0;
}


