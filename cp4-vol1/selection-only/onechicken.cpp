#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    int diff = m - n;
    if (diff > 1)
        cout << "Dr. Chaz will have " << diff << " pieces of chicken left over!\n";
    else if (diff == 1)
        cout << "Dr. Chaz will have 1 piece of chicken left over!\n";
    else if (diff == -1)
        cout << "Dr. Chaz needs 1 more piece of chicken!\n";
    else
        cout << "Dr. Chaz needs " << diff * -1 << " more pieces of chicken!\n";

    return 0;
}