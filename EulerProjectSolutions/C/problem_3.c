#include <stdio.h>
#include <math.h>

int main() {
    long long n = 600851475143;
    for (long long i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            n /= i;
        }
    }
    printf("The largest prime factor is: %lld\n", n);
    return 0;
}
