#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char *reverse_string(char *ptr)
{
	char *str = ptr;
	char *tmp=(char *)malloc((strlen(str)+1)*sizeof(char));
	int count=0;
	int len=0;
	len=strlen(str);
	tmp[len]='\0';
	tmp=tmp+(len-1);
	
//	printf("%x\t %c",(str+(len-1)),*(str+(len)-1));
	for ( count = 0; count < len ; count++ )
	{
		*tmp-- = *str++;
		 
	}
	tmp++;
//	printf ("\ttmp:%s\n",tmp);
	return tmp;

}
int main () 
{
	char *i = "sachin is cricket god";
	char *revStr=NULL;
	char *tmpPtr=NULL;
	revStr=reverse_string(i);
	printf ("\trevStr:%s\n",revStr);
	tmpPtr=strtok(revStr," ");
	while (tmpPtr != NULL )
	{
		revStr=reverse_string(tmpPtr);
		printf ("\t%s\t",revStr);
		//printf("%s\n",tmpPtr);
		tmpPtr=strtok(NULL," ");
	}
	printf("\n");
//	revStr=reverse_string(revStr);
	return 0;

}


