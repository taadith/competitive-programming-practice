#include <iostream>

using namespace std;

int main() {
    int n, d, x;
    cin >> n >> d;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if (x > d)
            continue;
        else {
            cout << "It hadn't snowed this early in " << i << " years!\n";
            return 0;
        }
    }
    cout << "It had never snowed this early!\n";
    return 0;
}