#include <stdio.h>
int i = 0;
typedef int bool;
#define true 1
#define false 0
int main()
{
	while(1)
	{
		if(IsPrime(i) == true)
		{
			printf("-%d", i);
			i++;
		}
		else
		{
			i++;
		}
	}
}

bool IsPrime(int number)
{
	int adividir = 2;
	while(adividir < number)
	{
		if(number%adividir == 0)
		{
			return false;
		}
		else
		{
			adividir++;
		}
		return true;
	}
}
