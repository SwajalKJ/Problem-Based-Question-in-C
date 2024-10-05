//Q10. Implement a C program to print list of prime numbers.
#include<stdio.h>
int prime (int n){
	for(int i=2;i<=n;i++){
		if(n%i!=0){
			return n;
		}
	}
}
int main()
{
	int n,count=0,i;
	printf("enter value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++);
	{
         int s=prime(i);
        printf("%d\n",s);
	
	}
}


