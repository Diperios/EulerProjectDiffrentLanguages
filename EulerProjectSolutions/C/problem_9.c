#include <stdio.h>

int main() {
    for (int a = 1; a < 1000; a++) {
        for (int b = a; b < 1000; b++) {
            int c = 1000 - a - b;
            if (a * a + b * b == c * c) {
                printf("The product abc is: %d\n", a * b * c);
                return 0;
            }
        }
    }
    return 0;
}
