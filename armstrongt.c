# include <stdio.h>

int main(){
int x,rem,result,total,h;

result = 0;
total = 0;
scanf("%d",&x);

while (x!=0){
rem = x%10;
result = rem*rem*rem;
x = x/10;
total += result;
}
h = total;
printf("%d",h);
if (x == h){
  printf(" armstrong");
}

else{
  printf("armstrong");
}

return 0;;
}
