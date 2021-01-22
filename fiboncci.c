#include <stdio.h>

int main()
{
int a,t=0,t1=1,c,num;

    
    printf("enter a number of term\n");
    scanf("%d",&num);
    for(a=0;a<=num;a++)
    {
      printf("%d\n",t);
      c=t1+t;
      t=t1;
      t1=c;
    }
    
    return 0;
}    
