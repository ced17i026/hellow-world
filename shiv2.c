#include<stdio.h>
void main()
{
int A,B,C,D;//we are taking any four digit number but while entring you have to give spaces between them
printf("enter any four digit number");//this will print the command that mention user to enter the four numbers
scanf("%d%d%d%d",&A,&B,&C,&D);//this will scan the numbers provided by the user and & here is necessary as it reffers to space we have provided while asigning the integers
int c=(A+B+C+D)%3;//here is another variable c that gives the remainder of sum of a,b,c and d divided by 3
printf("c=%d \n",c);//this will print the result of above arithematic
printf("if c equal to zero then given number is divisible by 3 \n");//this will just print to let user know that if c is not zero then number is not divisible by 3
}
