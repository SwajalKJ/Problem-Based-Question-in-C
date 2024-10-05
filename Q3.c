//Q3. Implement a system to calculate the Grade of the student based on marks in n subjects.

#include<stdio.h>

int main()
{
	int phy, chem, maths,bio,eng,per;
	printf("enter marks of physics:");
	scanf("%d",&phy);
	printf("enter marks of chemistry:");
	scanf("%d",&chem);
	printf("enter marks of biology:");
	scanf("%d",&bio);
	printf("enter marks of maths:");
	scanf("%d",&maths);
	printf("enter marks of english:");
	scanf("%d",&eng);
	per=((phy+chem+bio+maths+eng)/500)*100;
	if(per<=40)
	{
		printf("FAIL");
	}
	else if(per>40 && per<=60)
	{
		printf("D");
	}
	else if(per>60 && per<=70)
	{
		printf("C");
	}
	else if(per>70 && per<=80)
	{
		printf("B");
	}
	else if(per>80)
	{
		printf("A");
	}
	else
	{
		printf("O");
	}
}
