#include <stdio.h>

int factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n-1);
}

int main() {
    int N;
    
    scanf("%d", &N);

    printf("%d\n", factorial(N));

    return 0;
}