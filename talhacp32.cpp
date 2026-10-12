#include <iostream>
using namespace std;

int main() {
    int accountType, service;
    cout << "1. Savings  2. Current\nChoose account: ";
    cin >> accountType;

    switch (accountType) {
        case 1:
            cout << "1. Balance inquiry  2. Profit information\n";
            cin >> service;
            switch (service) {
                case 1: cout << "Savings balance inquiry selected"; break;
                case 2: cout << "Savings profit information selected"; break;
                default: cout << "Invalid service";
            }
            break;
        case 2:
            cout << "1. Balance inquiry  2. Cheque information\n";
            cin >> service;
            switch (service) {
                case 1: cout << "Current account balance inquiry selected"; break;
                case 2: cout << "Cheque information selected"; break;
                default: cout << "Invalid service";
            }
            break;
        default:
            cout << "Invalid account type";
    }

    return 0;
}

