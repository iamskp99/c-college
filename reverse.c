# include <stdio.h>

int main(){

int x,rev;

scanf("%d",&x);
rev = 0;
while(x != 0){
rev = rev*10;
rev = rev+(x%10);
x = x/10;

}

printf("%d",rev);
return 0;
}
