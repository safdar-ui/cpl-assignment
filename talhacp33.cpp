#include <iostream>
using namespace std;

int main() {
    int sport, position;
    cout << "1. Cricket  2. Football\nChoose sport: ";
    cin >> sport;

    switch (sport) {
        case 1:
            cout << "1. Batter  2. Bowler  3. Wicketkeeper\n";
            cin >> position;
            switch (position) {
                case 1: cout << "Cricket batter"; break;
                case 2: cout << "Cricket bowler"; break;
                case 3: cout << "Cricket wicketkeeper"; break;
                default: cout << "Invalid position";
            }
            break;
        case 2:
            cout << "1. Goalkeeper  2. Defender  3. Striker\n";
            cin >> position;
            switch (position) {
                case 1: cout << "Football goalkeeper"; break;
                case 2: cout << "Football defender"; break;
                case 3: cout << "Football striker"; break;
                default: cout << "Invalid position";
            }
            break;
        default:
            cout << "Invalid sport";
    }

    return 0;
}
