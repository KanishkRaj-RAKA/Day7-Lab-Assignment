#include <stdio.h>
int sumOfDigits(int num);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = sumOfDigits(num);
    printf("Sum of digits of %d is %d\n", num, sum);
    return 0;
}
int sumOfDigits(int num) {
    if (num < 10) {
        return num;
    }
    else {
        return num % 10 + sumOfDigits(num / 10);
    }
}