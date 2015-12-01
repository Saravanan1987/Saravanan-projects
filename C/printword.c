#include<stdio.h>
#define OUT = 0;
#define IN =  0;
int main ()
{
	int c = 0;
	while ( ( c = getchar() ) != EOF )
	{
		if ( c == '\n' || c == '\t' || c == ' ' )
		{
			printf("\n");
		}
		else
		{
			putchar(c);
		}
	}
	return 0;
}
