#include<stdio.h>
int main()
{
	int num = 10;
	int *iptr;
	iptr = &num;
	int x, y, z;
	//print num via iptr

	printf("*iptr = %d\n", *iptr); //
	printf("iptr = %p\n", iptr); //
	printf("&num = %p\n", &num); //
	printf("&iptr = %p\n",&iptr); //
	printf("num = %d\n",num); //
	x = sizeof(num); //size of num
	y = sizeof(*iptr); //size of *iptr
	z = sizeof(iptr); //size of ptr

	printf("%d\n%d\n%d\n",x,y,z);
return 0;
}
