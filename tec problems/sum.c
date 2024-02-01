#include<stdio.h>
int sumtill(int n);
int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int y = sumtill(number);
    printf("the sum is %d", y);
    return 0;
}
int sumtill(int n) {
    int y = n;
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    int sum = 0, digit;
    if (count != 1) {
        while (y > 0) {
            digit = y % 10;
              sum += digit;
            y /= 10;
        }
        return sumtill(sum);
    } else {
        return y;
    }
}
