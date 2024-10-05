//Q1. Implement a choice based arithmetic calculator (1-add,2-sub,3-mul,4-div etc), by implementing functions.

#include<stdio.h>

int add(int n1,int n2);
int sub(int n1,int n2);
int mul(int n1,int n2);
int div(int n1, int n2);

int main()
{
	int a,b,op;
	int y;
	while(1){		
	printf("enter 2 numbers:");
	scanf("%d%d",&a,&b);
	printf("enter 1 for add\nenter 2 for subtract\nenter 3 for multiplication\nenter 4 for division\n");
	scanf("%d",&op);
	switch(op){
		case 1: 
			y=add(a,b);
			printf("addition of 2 number:%d\n",y);
			break;
		case 2:
			y=sub(a,b);
			printf("subtraction of 2 number:%d\n",y);
			break;
		case 3:
			y=mul(a,b);
			printf("multiplication of 2 numbers:%d\n",y);
			break;
		case 4:
			y=div(a,b);
			printf("division of 2 numbers:%d\n",y);
			break;
		default:
			return -1;
	}
	}
}
int add(int n1,int n2)
{
	return n1+n2;
}
int sub(int n1, int n2)
{
	return n1-n2;
}
int mul(int n1, int n2)
{
	return n1*n2;
}
int div(int n1, int n2)
{
	if(n2!=0)
	{
		return(n1/n2);
	}
	else
	{
		printf("Error\n");
	}
}

		
