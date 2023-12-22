#include <iostream>

int main() {
    int t;
    scanf("%d", &t);
    
    int n,m,a,b;
    for(int i = 0; i < t; i++) {
        scanf("%d %d", &n, &m);
        a = (n - 2) / 3;
        b = (m - 2) / 3;
        if ((n - 2) % 3 != 0)
            ++a;
        if ((m - 2) % 3 != 0)
            ++b;
        printf("%d\n", a * b);
    }

    return 0;
}