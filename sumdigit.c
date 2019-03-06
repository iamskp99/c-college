# include <stdio.h>

int main(){
int x,sum,l;

scanf("%d",&x);

sum = 0;
while (x>0){
l = x%10;
x = (x/10);
sum = sum + l;
}
printf("%d",sum);
return 0;
}
