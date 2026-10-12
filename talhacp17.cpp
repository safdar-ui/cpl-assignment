#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Enter expression (e.g. 8 + 2): ";
    cin >> a >> op >> b;

    switch (op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/':
            if (b != 0) cout << a / b;
            else cout << "Cannot divide by zero";
            break;
        default: cout << "Invalid operator";
    }

    return 0;
}
