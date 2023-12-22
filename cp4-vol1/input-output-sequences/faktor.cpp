#include <iostream>

using namespace std;

int main() {
    int a,i;
    scanf("%d %d", &a, &i);

    int c = (a * i) - (a - 1);

    printf("%d\n", c);

    return 0;
}