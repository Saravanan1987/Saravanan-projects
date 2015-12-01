#include<stdio.h>
main ()
{
	int c;
	while ( ( c = getchar()) != EOF )
	{
		if ( c == '\t' || c == '\n' || c == ' ' )
		{
			printf ("\n");
		}
		else
		{
			putchar('*');
		}
	}
}
