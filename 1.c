#include<stdio.h>
int main()
{
   /*int a, b , c;
   scanf("%d%d%d", &a, &b, &c);
   int x,y;
   x=a;
    y=b;
   b=c;
  
   c=x;
   a=y;
printf("%d %d %d\n", a,b,c);*/
int a,b,c;
scanf("%d%d%d", &a,&b,&c);
a=a+b+c;
c=a-(b+c);
b=a-(b+c);
a=a-(b+c);
printf("%d %d %d\n", a, b,c);


}