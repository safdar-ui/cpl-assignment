#include <iostream>
using namespace std;

int main() {
    int category, item;
    cout << "1. Drinks  2. Snacks\nChoose category: ";
    cin >> category;

    switch (category) {
        case 1:
            cout << "1. Tea  2. Juice\nChoose item: ";
            cin >> item;
            switch (item) {
                case 1: cout << "Tea selected"; break;
                case 2: cout << "Juice selected"; break;
                default: cout << "Invalid drink";
            }
            break;
        case 2:
            cout << "1. Sandwich  2. Fries\nChoose item: ";
            cin >> item;
            switch (item) {
                case 1: cout << "Sandwich selected"; break;
                case 2: cout << "Fries selected"; break;
                default: cout << "Invalid snack";
            }
            break;
        default:
            cout << "Invalid category";
    }

    return 0;
}
