#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,g,x,p,c,a;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> g;
        vector<int> group;
        for(int j = 0; j < g; j++) {
            cin >> x;
            group.push_back(x);
        }
        for(int j = 1; j < group.size() - 1; j++) {
            p = group.at(j - 1);
            c = group.at(j);
            a = group.at(j + 1);
            if (c != p + 1 && c != a - 1) {
                cout << j + 1 << "\n";
                break;
            }
        }
    }

    return 0;
}