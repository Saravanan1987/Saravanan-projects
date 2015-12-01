#include<stdio.h>
int main()
{
	int c=0;
	int flag=0;
	while ( (c = getchar()) != EOF )
	{
		if ( c == ' ')
		{
			if ( flag == 1 )
			{
				continue;
			}
			flag = 1;
			putchar(c);
		}
		else
		{
			putchar(c);
			flag = 0;
		}
	}
	return 0;
}
