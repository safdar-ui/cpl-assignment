#include <iostream>
using namespace std;

int main() {
    int component, option;
    cout << "1. Processor  2. Storage\nChoose component: ";
    cin >> component;

    switch (component) {
        case 1:
            cout << "1. Basic  2. High performance\n";
            cin >> option;
            switch (option) {
                case 1: cout << "Basic processor selected"; break;
                case 2: cout << "High-performance processor selected"; break;
                default: cout << "Invalid processor option";
            }
            break;
        case 2:
            cout << "1. HDD  2. SSD\n";
            cin >> option;
            switch (option) {
                case 1: cout << "Hard disk drive selected"; break;
                case 2: cout << "Solid-state drive selected"; break;
                default: cout << "Invalid storage option";
            }
            break;
        default:
            cout << "Invalid component";
    }

    return 0;
}
