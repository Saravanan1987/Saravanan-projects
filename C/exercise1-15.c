#include<stdio.h>
void fahrToCel();
void fahrToCel()
{
	int lower=0, upper = 300, step = 20;
	int i = 0;
	float celusis = 0, fahr=0 ;
	fahr = lower;
	while ( fahr <= upper)
	{
		celusis = ( 5.0 / 9.0 )  * (fahr - 32.0);
		printf("%.2f %2.3f\n",fahr,celusis);
		fahr = fahr + 20;
	}
	
}

int main()
{
	fahrToCel();
	return 0;
}


