#include <iostream>
using namespace std;

int main() {
    int category, item, size;
    double price = 0;

    cout << "1. Pizza  2. Burger\nChoose category: ";
    cin >> category;

    switch (category) {
        case 1:
            cout << "1. Vegetable pizza  2. Chicken pizza\n";
            cin >> item;
            switch (item) {
                case 1: price = 700; break;
                case 2: price = 900; break;
                default: cout << "Invalid pizza"; return 0;
            }
            break;
        case 2:
            cout << "1. Regular burger  2. Chicken burger\n";
            cin >> item;
            switch (item) {
                case 1: price = 350; break;
                case 2: price = 500; break;
                default: cout << "Invalid burger"; return 0;
            }
            break;
        default:
            cout << "Invalid category"; return 0;
    }

    cout << "1. Regular size  2. Large size\nChoose size: ";
    cin >> size;
    switch (size) {
        case 1: break;
        case 2: price += 200; break;
        default: cout << "Invalid size"; return 0;
    }

    cout << "Total price = Rs. " << price;
    return 0;
}
