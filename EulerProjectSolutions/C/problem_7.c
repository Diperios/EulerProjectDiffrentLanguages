#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int count = 0, n = 1;
    while (count < 10001) {
        n++;
        if (isPrime(n)) count++;
    }
    printf("The 10001st prime is: %d\n", n);
    return 0;
}
