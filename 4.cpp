#include<stdio.h>

int main()
{
	int i=5;
	int sum=0;
	while(i<16)
	{
		sum=sum+i;
		if(i==15)
		{
			printf("%i=%i",i,sum);
		}
		else
		{
			printf("%i+",i);
		}
		i++;
	}
}