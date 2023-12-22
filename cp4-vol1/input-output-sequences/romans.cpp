#include <iostream>
#include <cmath>

int main() {
    double x;
    if (scanf("%lf", &x) != 1)
        return -1;
    printf("%.0f\n", ceil(x * 1000.0 * 5280.0 / 4854));

    return 0;
}