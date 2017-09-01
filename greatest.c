#include<stdio.h>
void main()
{
int a,b,c;
printf("enter 3 no");
scanf("%d",&a,&b,&c);
if(a>b||a>c)
{
printf("a is greater");
}
else if(b>c||b>a)
{
printf("b is greater");
}
else
{
printf("c is greater");
}

}
