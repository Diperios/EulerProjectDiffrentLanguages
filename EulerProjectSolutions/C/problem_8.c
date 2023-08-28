#include <stdio.h>
#include <string.h>

int main() {
    char number[] = "Your 1000-digit number here";
    int largestProduct = 0;
    for (int i = 0; i < strlen(number) - 12; i++) {
        int product = 1;
        for (int j = 0; j < 13; j++) {
            product *= number[i + j] - '0';
        }
        if (product > largestProduct) largestProduct = product;
    }
    printf("The largest product is: %d\n", largestProduct);
    return 0;
}
