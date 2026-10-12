#include <iostream>
using namespace std;

int main() {
    int travel, ticket;
    cout << "1. Train  2. Bus\nChoose travel type: ";
    cin >> travel;

    switch (travel) {
        case 1:
            cout << "1. Economy  2. Business\nChoose class: ";
            cin >> ticket;
            switch (ticket) {
                case 1: cout << "Train economy ticket selected"; break;
                case 2: cout << "Train business ticket selected"; break;
                default: cout << "Invalid class";
            }
            break;
        case 2:
            cout << "1. Standard  2. Executive\nChoose class: ";
            cin >> ticket;
            switch (ticket) {
                case 1: cout << "Bus standard ticket selected"; break;
                case 2: cout << "Bus executive ticket selected"; break;
                default: cout << "Invalid class";
            }
            break;
        default:
            cout << "Invalid travel type";
    }

    return 0;
}
