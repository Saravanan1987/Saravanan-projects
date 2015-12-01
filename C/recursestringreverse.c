#include<stdio.h>
void reverse(char *a)
{
   if(*a!='\0')
   {   
     reverse(a+1);
   }
   printf("%c",*a);
}        
int main()
{
  char a[17]="abcdefg";
  reverse(a);
  printf("\n");
}
