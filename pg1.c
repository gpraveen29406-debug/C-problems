#include <stdio.h>
int main(){
int num;

    
    num = 5;
    if (num > 0) {
        printf("Input: %d Output: Positive\n", num);
    } else if (num < 0) {
        printf("Input: %d Output: Negative\n", num);
    } else {
        printf("Input: %d Output: Zero\n", num);
    }


    num = -3;
    if (num > 0) {
        printf("Input: %d Output: Positive\n", num);
    } else if (num < 0) {
        printf("Input: %d Output: Negative\n", num);
    } else {
        printf("Input: %d Output: Zero\n", num);
    }
    return 0;
    }