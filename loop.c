#include<stdio.h>
void main()
{
int n,i;
int sum;
printf("enter  N numbers");
scanf("%d",&n);
for(i=1;i>=n;++i)
{
sum=sum+i;
}
printf("%d",sum);
}
