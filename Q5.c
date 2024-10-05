//Q5. Implement a C program to check given number is prime or not. ( eg. 1, 2, 3, 5. 7, 11, 13, 17 ... )

#include<stdio.h>

int main()
{
	int i=2, n;
	printf("enter a number:");
	scanf("%d",&n);
	while(n%i!=0)
	{
		i++;
	}
	if(n==i)
	{
		printf("prime number\n");
	}
	else 
	{
		printf("not a prime number\n");
	}
	return 0;
}

