#include <stdio.h>
#include <stdbool.h>

bool isPrime(long n) {
    for (long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long sum = 0;
    for (long i = 2; i < 2000000; i++) {
        if (isPrime(i)) sum += i;
    }
    printf("The sum of all primes below 2 million is: %ld\n", sum);
    return 0;
}
