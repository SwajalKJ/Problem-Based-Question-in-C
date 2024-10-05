//Q8. Implement a C program to check given no. is perfect no. or not ( eg 6, 28, 496, 8128 ( perfect no is equal to half the sum of all its positive divisors for 6 it is (1+2+3+6) / 2 is 6)

#include<stdio.h>

int main()
{
	int i, rem,sum=0,num;
	printf("enter number");
	scanf("%d",&num);
	for(i=1;i<num;i++);
	{
		rem=num%i;
		if(rem==0)
		{
			sum =sum+i;
		}
	}
	if(sum==num)
	{
		printf("perfect number\n");
	}
	else
	{
		printf("not a perfect number\n");
	}
	return 0;
}

