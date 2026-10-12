#include <iostream>
using namespace std;

int main() {
    int device, issue;
    cout << "1. Laptop  2. Phone\nChoose device: ";
    cin >> device;

    switch (device) {
        case 1:
            cout << "1. No sound  2. No internet\n";
            cin >> issue;
            switch (issue) {
                case 1: cout << "Check volume and audio output"; break;
                case 2: cout << "Check Wi-Fi and network settings"; break;
                default: cout << "Invalid issue";
            }
            break;
        case 2:
            cout << "1. Low battery  2. App problem\n";
            cin >> issue;
            switch (issue) {
                case 1: cout << "Check charger and battery usage"; break;
                case 2: cout << "Restart or update the app"; break;
                default: cout << "Invalid issue";
            }
            break;
        default:
            cout << "Invalid device";
    }

    return 0;
}
