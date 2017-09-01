#include<stdio.h>
void main()
{
char c;
printf("enter a char");
scanf("%c",&c);
if((c >=97 && c <= 127)||(c >= 65 && c <= 90))
{
printf("alphabet");
}
else
{
printf("not an alphabet");
}
}

