#include<stdio.h>
void main()
{
printf("Enter any number,you have to try get the right number\n\n");
for (;;) {
int a=36;
int b;
scanf("%d", &b);
if (b>36) {
printf("\n\nyour number is greater");
}
if (b<36) {
printf("\n\nyour number is less");
}
if (b==36) {
printf("\n\nCongrates! you got it");
}
int l=1;
printf("\n\nwant to try again, press 1 either press 0\n\n");
int e;
scanf("%d",&e);
if (e==l) {
printf("\n\nenter again\n\n");}
if (e !=l) {
printf("Thanks for playing\n");
int z=0;
exit(0);
}}
}
