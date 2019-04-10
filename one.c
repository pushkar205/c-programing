 
#include<stdio.h>
 
int sum(int c, int d)
{
	int sum;
	sum=c+d;
	return sum;
}
void main()
{
	int a,b;	
	printf("enter the number");
	scanf("%d%d",&a,&b);
	printf("the sum is %d \n",sum(a,b));
}
	
