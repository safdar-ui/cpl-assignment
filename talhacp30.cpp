#include <iostream>
using namespace std;

int main() {
    int type, model;
    cout << "1. Two-wheeler  2. Four-wheeler\nChoose type: ";
    cin >> type;

    switch (type) {
        case 1:
            cout << "1. Bicycle  2. Motorcycle\nChoose model: ";
            cin >> model;
            switch (model) {
                case 1: cout << "Bicycle: 2 wheels"; break;
                case 2: cout << "Motorcycle: 2 wheels"; break;
                default: cout << "Invalid model";
            }
            break;
        case 2:
            cout << "1. Car  2. Van\nChoose model: ";
            cin >> model;
            switch (model) {
                case 1: cout << "Car: 4 wheels"; break;
                case 2: cout << "Van: usually 4 wheels"; break;
                default: cout << "Invalid model";
            }
            break;
        default:
            cout << "Invalid vehicle type";
    }

    return 0;
}
