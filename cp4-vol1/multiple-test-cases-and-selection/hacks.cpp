#include <iostream>

using namespace std;

int main() {
    int n, r, e, c;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> r >> e >> c;
        if (r < (e - c))
            cout << "advertise\n";
        else if (r == (e - c))
            cout << "does not matter\n";
        else
            cout << "do not advertise\n";
    }

    return 0;
}