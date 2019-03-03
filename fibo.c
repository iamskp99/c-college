# include <stdio.h>

int main(){

int x,f=0,s=1,next,i;
printf("Terms??\n");
scanf("%d",&x);

i = 0;
while (i != x){
  if (i == 0){
    next = 0;

  }
  else {
    next = f+s;
    f = s;
    s = next;
  }

  i = i + 1;
  //printf("%d\n %d \n",0,1);
  printf("%d",next);
}

return 0;
}
