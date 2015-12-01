#include<stdio.h>
main () 
{
	int c=0, i = 0, j=0,val=0;
	int nchar[26]={0};
	while ( (c = getchar()) != EOF )
	{
		if ( c >= 'a' && c <= 'z')
		{
			++nchar[c-'a'];
		}
	}
	for ( i = 0 ; i < 26 ; i++ )
	{
		for ( j= 0; j < nchar[i]; j++)
		{
			putchar('*');
		}
		printf("\n");	
	}
	
}
