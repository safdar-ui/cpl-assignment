#include <iostream>
using namespace std;

int main() {
    int score, tieBreaker;
    cout << "Enter score (0-100): ";
    cin >> score;

    if (score >= 70) {
        cout << "Enter tie-breaker points: ";
        cin >> tieBreaker;
        if (tieBreaker >= 10) {
            cout << "Gold prize";
        } else if (tieBreaker >= 5) {
            cout << "Silver prize";
        } else {
            cout << "Bronze prize";
        }
    } else {
        cout << "No prize";
    }

    return 0;
}
