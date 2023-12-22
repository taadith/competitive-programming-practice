#include <iostream>

using namespace std;

int main() {
    int ctr = 1;
    int n, x, min, max, range;
    cin >> n;
    while(!cin.eof()) {
        min = 1000001;
        max = -1000001;
        for(int i = 0; i < n; i++) {
            cin >> x;
            if (x < min)
                min = x;
            if (x > max)
                max = x;
        }
        range = max - min;
        cout << "Case " << ctr << ": " << min << " " << max << " " << range << "\n";
        ++ctr;
        cin >> n;
    }

    return 0;
}