//Q7. Implement a C program to check given no. is armstrong or not ( eg 153 is armstrong number ( 153=1^3+5^3+3^3 ) )

#include<stdio.h>

int main()
{
	int n,r,sum=0,temp;
	printf("enter a number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("amrstrong number\n");
	}
	else
	{
		printf("Not an armstrong number\n");
	}
	return 0;
}
