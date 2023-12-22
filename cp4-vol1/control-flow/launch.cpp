#include <iostream>

using namespace std;

int main() {
    int n, x, minIdx;
    int min = 1e9 + 1;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if (x < min) {
            min = x;
            minIdx = i;
        }
    }
    cout << minIdx << "\n";

    return 0;
}