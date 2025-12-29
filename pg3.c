#include <stdio.h>
int main(){
int num1, num2;

    // Input for test case 1: 4 and 9
    num1 = 4;
    num2 = 9;
    if (num1 >= num2) {
        printf("Input: %d, %d Output: %d\n", num1, num2, num1);
    } else {
        printf("Input: %d, %d Output: %d\n", num1, num2, num2);
    }

    // Input for test case 2: 10 and 2
    num1 = 10;
    num2 = 2;
    if (num1 >= num2) {
        printf("Input: %d, %d Output: %d\n", num1, num2, num1);
    } else {
        printf("Input: %d, %d Output: %d\n", num1, num2, num2);
    }
    return 0;
}