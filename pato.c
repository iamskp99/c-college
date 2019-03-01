# include <stdio.h>

int main(){

int x,j,l;
 x = 0;
 j = 0;
scanf("%d",&x);

while(j < x){
l = 0;
 while(l <= j){

  printf("* ");
  l = l+1;
 }
  printf(" \n");
  j = j+1;
}

return 0;
}
