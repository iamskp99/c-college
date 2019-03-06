# include <stdio.h>


int main(){
 int x,i;
 scanf("%d",&x);

 i = 2;
 while (i != x){

 if (x%i == 0){

  printf("Not");
  break;

 }
 else{

  printf("prime");
 }


 i = i+1;
 }

 return 0;
}
