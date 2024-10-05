#include<stdio.h>
int main()
{
char c = 'A';
char *cp;
cp=&c;

printf("c = %d\n",c);
printf("c = %c\n",c);
printf("cp = %p\n",cp);
printf("cp+1 = %p\n",cp+1);
printf("cp+2 = %p\n",cp+2);
printf("*cp = %d\n",*cp);
printf("*cp+1 = %d\n",*cp+1);
printf("*cp+2 = %d\n",*cp+2);
return 0;
}
