#include <iostream>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    if (x == 0 && y == 1)
        cout << "ALL GOOD\n";
    else if (x != 0 && y == 1)
        cout << "IMPOSSIBLE\n";
    else
        cout << x * (y + 1) / (1 - (y * y)) << "\n";
}