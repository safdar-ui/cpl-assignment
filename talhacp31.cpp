#include <iostream>
using namespace std;

int main() {
    int department, program;
    cout << "1. Computing  2. Business\nChoose department: ";
    cin >> department;

    switch (department) {
        case 1:
            cout << "1. BSCS  2. BSIT\nChoose program: ";
            cin >> program;
            switch (program) {
                case 1: cout << "Computer Science selected"; break;
                case 2: cout << "Information Technology selected"; break;
                default: cout << "Invalid program";
            }
            break;
        case 2:
            cout << "1. BBA  2. Accounting\nChoose program: ";
            cin >> program;
            switch (program) {
                case 1: cout << "BBA selected"; break;
                case 2: cout << "Accounting selected"; break;
                default: cout << "Invalid program";
            }
            break;
        default:
            cout << "Invalid department";
    }

    return 0;
}
