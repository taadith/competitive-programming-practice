#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int l,r;
    cin >> l >> r;
    
    if (l == 0 && r == 0)
        cout << "Not a moose" << "\n";
    else if (l != r) {
        cout << "Odd " << 2 * max(l,r) << "\n";
    }
    else {
        cout << "Even " << l + r << "\n";
    }

    return 0;
}