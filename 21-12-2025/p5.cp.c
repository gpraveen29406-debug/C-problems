#include <stdio.h>
int main() {
    
    int marks = 45;
    printf("enter the marks:");
    scanf("%d",&marks);
    if (marks<=45)
    printf("it is pass");
    else (marks>=40)
    printf("it is fail");
    
    return 0;
}