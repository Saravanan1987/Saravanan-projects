#include<stdio.h>
#include<string.h>

#define MAXLINE 1000

int getLine (char s[], int maxLen);
void reverse ( char to[], char from[] );

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
void reverse ( char to[],char from[])
{
	int i = 0 ;
	int j= 0;
	int len = 0;
	len = strlen(from);
	to[j]= '\0';
	j = len-1;
	while ( from[i]  != '\0' )
	{
		to[j--] = from [i++];
	}
	printf("Reversed string is:%s\n",to);	
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
		reverse(to,s);
	}
	printf ("Exiting..........\n");
	return 0;
}
