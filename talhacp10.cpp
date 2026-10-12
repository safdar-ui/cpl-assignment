#include <iostream>
using namespace std;

int main() {
    double order;
    cout << "Enter order amount: ";
    cin >> order;

    if (order >= 3000) {
        cout << "Free delivery. Total = Rs. " << order;
    } else {
        cout << "Delivery fee = Rs. 200";
        cout << "\nTotal = Rs. " << order + 200;
    }

    return 0;
}
