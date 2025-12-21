#include <stdio.h>
int main() {
    
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if (age>=18)
        printf("the a person is eligible to vote");
    
    else 
        printf("the a person eligible or not eligible");
    
    
    return 0;
}