#include <stdio.h>

int main() {
 int num,q;
 printf (" enter the integer value:");
 scanf("%d" ,&num);
 if (num>99 && num<=999) {
q =num/10;
//printf("d\n" ,q);
int r = num%10;
printf("%d\n",r);
r = q%10;
printf("%d\n", r);
q = q/10;
r = q%10;
printf("%d\n", r);
//q = q/10;
//printf("%d\n" , q);
 }
 else printf("\n wrong input \n");
 
   return 0;
}

Output
enter the integer value:234
4
3
2

