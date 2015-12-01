#include<stdio.h>
int main()
{
	unsigned int c;
	while ( (c = getchar()) != EOF )
	{
		putchar(c);
	}
	printf("EOF:%u %d %x\n",c,c,c);
	return 0;
}
