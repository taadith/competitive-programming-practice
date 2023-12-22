#include <iostream>

using namespace std;

int main() {
    int n,a,b,c;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if (a + b == c)
            cout << "Possible\n";
        else if ((a - b == c) || (a - b == -1*c))
            cout << "Possible\n";
        else if (a * b == c)
            cout << "Possible\n";
        else if ((a / b == c && c * b == a) || (b / a == c && c * a == b))
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }

    return 0;
}