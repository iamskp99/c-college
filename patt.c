# include <stdio.h>

int main(){

int x,y,z;

scanf("%d",&x);
y = 0;
z = 0;
y = x;
while(y != 0){
  z = y;
  while(z != 0){
   printf("* ");
   z = z-1;
  }
   printf("\n");
 y = y-1;
}

return 0;
}
