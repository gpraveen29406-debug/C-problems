#include <stdio.h>
int main(){
int year;

    
    year = 2024;
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("Input: %d Output: Leap Year\n", year);
    } else {
        printf("Input: %d Output: Not Leap Year\n", year);
    }

    
    year = 2023;
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("Input: %d Output: Leap Year\n", year);
    } else {
        printf("Input: %d Output: Not Leap Year\n", year);
    }

    return 0;
}