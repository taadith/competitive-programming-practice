#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t,p,r,f,yrs;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> p >> r >> f;
        yrs = 0;
        while(p * pow(r,yrs) <= f)
            ++yrs;
        cout << yrs << endl;
    }
    return 0;
}