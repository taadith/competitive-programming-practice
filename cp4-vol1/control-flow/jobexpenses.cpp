#include <iostream>

using namespace std;

int main() {
    int n,x,e = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if (x < 0)
            e += -1 * x;
    }
    cout << e << "\n";
    return 0;
}