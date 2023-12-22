#include <iostream>
#include <cmath>

int main() {
    unsigned long rows;
    unsigned long long n;
    unsigned long long warriors;
    scanf("%llu", &n);
    for(int i = 0; i < n; i++) {
        scanf("%llu", &warriors);
        rows = ceil(sqrt(warriors));
        printf("%lu\n", rows);
    }

    return 0;
}