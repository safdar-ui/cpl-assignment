#include <iostream>
using namespace std;

int main() {
    int room, meal;
    double total = 0;

    cout << "1. Standard room  2. Deluxe room\nChoose room: ";
    cin >> room;
    switch (room) {
        case 1: total = 3000; break;
        case 2: total = 5000; break;
        default: cout << "Invalid room"; return 0;
    }

    cout << "1. No meal  2. Breakfast  3. Full meal plan\n";
    cin >> meal;
    switch (meal) {
        case 1: break;
        case 2: total += 500; break;
        case 3: total += 1500; break;
        default: cout << "Invalid meal plan"; return 0;
    }

    cout << "Total for one night = Rs. " << total;
    return 0;
}
