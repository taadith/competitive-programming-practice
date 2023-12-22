#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x;
    cin >> y;
    while(!(x == 0 && y == 0)) {
        if (x == y)
            cout << "Undecided.\n";
        else if (x + y == 13)
            cout << "Never speak again.\n";
        else if (x < y)
            cout << "Left beehind.\n";
        else
            cout << "To the convention.\n";
        cin >> x;
        cin >> y;
    }
    return 0;
}