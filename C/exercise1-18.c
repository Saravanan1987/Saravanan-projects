#include<stdio.h>

#define MAXLINE 1000

int getLine (char s[], int maxLen);
void removeBlankandTabs ( char to[], char from[] );

int getLine(char s[], int maxLen)
{
	int c,i;
	for ( i = 0 ; i < maxLen-1 && ( ( c = getchar() ) != EOF ) && c != '\n' ; ++i)
	{
		s[i] = c;
	}
	if ( c == '\n')
	{
		s[i] = '\n';
	}
	s[i] = '\0';
	return i;  
}
void removeBlanksandTabs ( char to[],char from[])
{
	int i = 0 ;
	int j= 0;
	while ( from[i]  != '\0' )
	{
		if ( from[i] != ' ' &&  from[i] != '\t' && from[i] != '\n' )
		{
			to[j++] = from[i];
		}
		i++;
	}
	if ( j != 0 )
	{
		to[j] = '\0';
		printf("Output:%s\n",to);	
	}
}
int main()
{
	int max = 0;
	int len = 0;
	char s[MAXLINE];
	char to[MAXLINE];

	while ( ( len = getLine(s,MAXLINE) ) > 0 )
	{
		max = len;
		printf("len:%d\n",max);
		removeBlanksandTabs(to,s);
	}
	printf ("Exiting..........\n");
	return 0;
}
