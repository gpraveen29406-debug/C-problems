#include <stdio.h>
int main(){
char c;

    // Input for test case 1: A
    c = 'A';
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        printf("Input: %c Output: Vowel\n", c);
    } else {
        printf("Input: %c Output: Not vowel\n", c);
    }

    // Input for test case 2: L
    c = 'L';
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        printf("Input: %c Output: Vowel\n", c);
    } else {
        printf("Input: %c Output: Not vowel\n", c);
    }
    return 0;
}