#include <iostream>

using namespace std;

int main() {
    int n,s,pt,t,miles;

    cin >> n;
    while(n != -1) {
        miles = 0;
        pt = 0;
        for(int i = 0; i < n; i++) {
            cin >> s >> t;
            miles += (t - pt) * s;
            pt = t;
        }
        cout << miles << " miles\n";
        cin >> n;
    }
    
    return 0;
}