#include<stdio.h>
void main()
{
int a , b, c;
printf("enter the value of a and b");
scanf("%d%d", &a, &b);
c=a/b*a+b-a*b/a;//arithematic in c happen from left to right by priority as braces at first then mul and div at second then substract and addition as third
printf("result of arithematic is %d \n", c);
}
