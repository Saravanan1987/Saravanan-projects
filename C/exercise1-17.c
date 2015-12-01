#include<stdio.h>

#define MAXLINE 1000

int getLine (char s[], int maxLen);
void copy ( char to[], char from[] );

int getLine(char s[], int maxLen)
{
	int c,i;
	for ( i = 0 ; i < maxLen-1 && ( ( c = getchar() ) != EOF ) && c != '\n' ; i++)
	{
		s[i] = c;
	}
	if ( c == '\n')
	{
		s[i] = '\n';
	}
	s[i+1] = '\0';
	return i;  
}
void copy ( char to[],char from[])
{
	int i = 0 ;
	while (  ( to [i] = from[i] ) != '\0')
		i++;
	printf("80 Character Line:%s\n",to);
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
		if ( max > 80 )
		{
			copy(to,s);
		}	
	}
	printf ("Exiting..........\n");
	return 0;
}
