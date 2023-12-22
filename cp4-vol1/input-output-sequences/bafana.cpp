#include <iostream>

int main() {
    int t, n, k, p, b;
    scanf("%d", &t);
    for(int i = 0; i < t; i++) {
        scanf("%d %d %d", &n, &k, &p);
        b = (k+p) % n;
        if (b == 0)
            b = n;
        printf("Case %d: %d\n", t, b);
    }
}