#include <iostream>
#include <cmath>

int main() {
    unsigned long n;
    scanf("%lu", &n);
    printf("%.0f\n", pow(pow(2, n) + 1, 2));
}