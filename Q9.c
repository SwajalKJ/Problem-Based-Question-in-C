//Q9. Implement a C program to have recursive sum of digits in a number (eg:- 9785 ==> 9+7+8+5 ==> 29 ==> 2+9 ==> 11 ==> 1+1 ==> 2)

#include<stdio.h>

int add(int n);

int main()
{
	int n , result;
	printf("enter number:");
	scanf("%d",&n);
	result=add(n);
	printf("sum of digits is:%d\n",result);
	return 0;
}

int add(int n)
{
	int sum=0;
	while(n!=0)
	{
		int r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(sum/10!=0)
	{
		return add(sum);
	}
	else
	{
		return sum;
	}
}
