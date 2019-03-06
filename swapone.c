#include<stdio.h>

int main(){

int x,y,z;
printf("Enter the first number: ");
scanf("%d",&x);
printf("Enter the second number: ");
scanf("%d",&y);

z = x;
x = y;
y = z;

printf("The first number is: %d\n",x);
printf("The second number is: %d",y);

return 0;

}
