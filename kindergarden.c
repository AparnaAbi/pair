# pair
#include<stdio.h>
main()
{
int b,n,i=1,j,count=0;
scanf("%d",&b);
n=2*b;
while(i<n)
{
for(j=i+1;j<=n;j++)
{
printf("%d%d\n",i,j);
count++;
}
i++;
}
printf("total number of pairs %d",count);
}
