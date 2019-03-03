# include <stdio.h>

int main(){

int x,facto;

scanf("%d",&x);

facto = 1;

if (x == 0 || x==1){

   facto = 1;
}

else if (x < 0){

   printf("Factorial does not exist.");

}

else{

  while (x!= 1){

   facto = facto*x;
   x = x-1;
}
}
printf("%d",facto);
return 0;
}
