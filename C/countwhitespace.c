#include<stdio.h>
int main()
{
	int c,blanks=0,tabs=0,newlines=0;
	while ( ( c = getchar() ) != EOF )
	{
		if ( c == '\n' )
			++newlines;
		if ( c == '\t' )
			++tabs;
		if ( c == ' ' )
			++blanks;
	}
	printf("\nnewlines:%d,tabs:%d,blanks:%d\n",newlines,tabs,blanks);	
	return 0;
}
