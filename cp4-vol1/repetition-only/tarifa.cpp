#include <iostream>

int main() {
    int x,n,p;
    unsigned int sum = 0;

    scanf("%d",&x);
    scanf("%d",&n);

    
    for(int i = 0; i < n; i++) {
        scanf("%d",&p);
        sum += x - p;
    }
    printf("%u\n", sum + x);
}