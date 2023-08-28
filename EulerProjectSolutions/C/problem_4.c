#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int n) {
    int reversed = 0, original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int largest = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            int product = i * j;
            if (isPalindrome(product) && product > largest) {
                largest = product;
            }
        }
    }
    printf("The largest palindrome product is: %d\n", largest);
    return 0;
}
