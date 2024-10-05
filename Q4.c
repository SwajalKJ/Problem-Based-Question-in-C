//Q4. Implement a C program to calculate GCD and LCM of 2 input number.

#include<stdio.h>

int main()
{
	int n1,n2,lcm,gcd;
	printf("Enter 2 number:");
	scanf("%d",&n1);
	scanf("%d",&n2);
	if(n1>n2)
	{
		lcm=n1;
		gcd=n2;
	}
	else
	{
		lcm=n2;
		gcd=n1;
	}
	while(lcm%n1!=0||lcm%n2!=0)
	{
		lcm++;
	}
	while(n1%gcd!=0||n2%gcd!=0)
	{
		gcd--;
	}
	printf("LCM=%d\nGCD=%d\n",lcm,gcd);
	return 0;
}
