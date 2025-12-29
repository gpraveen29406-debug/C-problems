#include <stdio.h>
int main(){
int num1, num2, num3;

    
    num1 = 2;
    num2 = 5;
    num3 = 3;
    if (num1 >= num2 && num1 >= num3) {
        printf("Input: %d, %d, %d Output: %d\n", num1, num2, num3, num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Input: %d, %d, %d Output: %d\n", num1, num2, num3, num2);
    } else {
        printf("Input: %d, %d, %d Output: %d\n", num1, num2, num3, num3);
    }


    num1 = 7;
    num2 = 1;
    num3 = 4;
    if (num1 >= num2 && num1 >= num3) {
        printf("Input: %d, %d, %d Output: %d\n", num1, num2, num3, num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Input: %d, %d, %d Output: %d\n", num1, num2, num3, num2);
    } else {
        printf("Input: %d, %d, %d Output: %d\n", num1, num2, num3, num3);
    }
    return 0;
}