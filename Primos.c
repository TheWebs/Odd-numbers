#include <stdio.h>
int i = 0;
typedef int bool;
#define true 1
#define false 0
int main()
{
	while(1)
	{
		if(IsOdd(i) == true)
		{
			printf("%d is an odd number", i);
			i++;
		}
		else
		{
			i++;
		}
	}
}

bool IsOdd(int number)
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
