#include<stdio.h>
int main()
{
	int i[10],j;
	int *iptr;
	iptr = &i[3];

	j = *iptr;
	printf("%d\n",j);
	j = i[3];
	printf("%d\n",j);
	j = *(iptr + 3);
	printf("%d\n", j);
return 0;
}
