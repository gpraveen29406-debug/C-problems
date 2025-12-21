#include <stdio.h>
int main() {

    char s;
    printf("a is single character vowel or consonant:");
    scanf("%c", &s);
    if (s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
    printf("the vowels");
    else 
    printf("the consonant");
    
    return 0;
}