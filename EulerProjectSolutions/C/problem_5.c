#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int lcm = 1;
    for (int i = 1; i <= 20; i++) {
        lcm = (lcm * i) / gcd(lcm, i);
    }
    printf("The smallest multiple is: %d\n", lcm);
    return 0;
}
