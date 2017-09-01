#include<stdio.h>
void main()
{
char a;
printf("enter character");
scanf("%c",&a);
if((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
{
printf("the character is alphabet");
}
else
{
printf("the character is not an alphabet");
}

    
