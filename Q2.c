//Q2. Implement income tax calculator by considering best possible parameters ( gender, senior citizen benefits, exemption for investment and other possible consideration). Make use of 
//if-else ladder.

#include<stdio.h>

int main()
{
        int tax=0;
    	int age,amt,dis;
	char gender;
	printf("enter amount: \n");
	scanf("%d",&amt);
	printf("enter gender:\n");
	__fpurge(stdin);
	scanf("%c",&gender);
	printf("enter age:");
	scanf("%d",&age);
	if(amt<=250000)
	{
		printf("tax NIL\n");
	}
	else if(amt>250000 && amt<=500000)
	{
		tax=tax+0.05*(amt-250000);
	}
	else if(amt>500000 && amt<=750000)
	{
		tax=tax+0.20*(amt-500000);
	}
	else if(amt>750000 && amt<=1000000)
	{
		tax=tax+0.20*(amt-750000);
	}
	else if(amt>1000000 && amt<=1250000)
	{
		tax=tax+0.30*(amt-1000000);
	}
	else if(amt>1250000 && amt<=1500000)
	{
		tax=tax+0.30*(amt-1250000);
	}
	else if(amt>1500000)
	{
		tax=tax+0.30*(amt-1500000);
	}
	if(gender=='M' && age>=60||gender=='F' && age<60)
	{
		dis=tax-(tax*0.05);
		printf("tax=%d\n",dis);
	}
	else if(gender=='F' && age>=60)
	{
		dis=tax-(tax*0.10);
		printf("tax=%d\n",dis);
	}
	else
	{
		printf("tax=%d\n",tax);
	}
	return 0;
}


