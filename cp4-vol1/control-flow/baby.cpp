#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    bool sense = true;
    string b;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> b;
        if (b == "mumble")
            continue;
        if (atoi(b.c_str()) != i)
            sense = false;
    }
    if (sense)
        cout << "makes sense\n";
    else
        cout << "something is fishy\n";

    return 0;
}