#include <iostream>

int main() {
    int a,b,c,n;
    std::cin >> a >> b >> c >> n;
    if (a < 1 || b < 1 || c < 1)
        printf("NO\n");
    else if (a + b + c >= n && n >= 3) //important to add n >= 3 condition
        printf("YES\n");
    else
        printf("NO");

    return 0;
}