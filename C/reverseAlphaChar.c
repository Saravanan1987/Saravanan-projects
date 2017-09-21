/************************************************************************************************************
Problem Statement:

You need to reverse a string that contains other characters apart from lowercase (a-z) and upper case letters (A-Z).


While doing the reversal, you need to ensure that the only the sequence of alphabets are reversed and not the other characters.

If the string does not contain any alphabets, it should give an error message No reversal possible

Go through the examples given below. (You can assume that the input string can be at most 80 characters in length)

Input : You need to read a string from STDIN and print the reversed string following the rule specified above.

Output : A string with alphabets reversed (but other characters position not changed) with respect to the original string.

Examples:

Input: Ab,c,de!$$$

Output: ed,c,bA!$$$

Input: !!!!abcd?#

Output: !!!!dcba?#

Input : ZYXcba

Output: abcXYZ

Input: ##@@!!&
************************************************************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_LEN 80

int alphaCount = 0;

int getLine(char *buf)
{
	int len = 0;
 	int  count = 0;
	int c = 0;
	printf("Input:");
	while ( ( (  c = getchar()) != EOF ) && c != '\n')
	{
		if ( len > MAX_LEN )
		{
			printf("Input is greater than MAX_LEN\n");
			return 0;
		}
		if ( isalpha(c) )
		{
			alphaCount++;
		}
		buf[len] = c;
		len++;
	}
	if ( !alphaCount)
	{
		printf("No reversal possible\n");
		return 0;
	}
	buf[len] = '\0';
	return len;

}

void myStrReverseAlphaCharcters(char *s1)
{
	char *tmpStr = NULL;
	char *revStr = NULL;
	int len = 0;
	int count = 0;
	char *ptr = s1;
	char *s2 = NULL;
	len = strlen(s1);
	tmpStr = (char *)malloc(sizeof(char) * (alphaCount+1));
	revStr = (char *)malloc(sizeof(char) * (len+1));
	tmpStr[alphaCount] = '\0';
	for ( count = (alphaCount-1); *ptr != '\0' && count >=0; )
	{
		if (isalpha(*ptr))
		{
			tmpStr[count] = *ptr;
			count--;
		}	
		ptr++;
	}
	s2 = tmpStr;
	for ( count = 0; *s1 != '\0'; count++,s1++)
	{
		if ( isalpha(*s1))
		{
			revStr[count] = *s2++;
		}
		else
		{
			revStr[count] = *s1;
		}
	}
	revStr[count] = '\0';	
	printf( "Output: %s\n", revStr);
	free(tmpStr);
	free(revStr);
	s2 = NULL;
	ptr = NULL;
}

int main()
{
	char buf[MAX_LEN];
	int len =0 ;
	len = getLine(buf);
	if ( len != 0)
	{
		myStrReverseAlphaCharcters(buf);
	}

}
