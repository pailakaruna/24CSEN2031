// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num,q,r;
    printf("Enter a number; ");
    scanf("%d" , &num);
    q = num;
    int sum = 0;
    while(q>0){
    r = q%10;
    sum = 10*sum+r;
    q = q/10;
    }
    printf("The reverse number = %d", sum);
     return 0;
    }


  Output
  Enter a number; 567
  The reverse number = 765