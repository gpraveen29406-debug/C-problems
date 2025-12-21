#include <stdio.h>
int main() {

     int attendence;
     printf("enter the attendence");
     scanf("%d", &attendence);
     if (attendence  >= 75)
          printf("Allowed");
    else 
      printf("Not allowed");
    return 0;
}