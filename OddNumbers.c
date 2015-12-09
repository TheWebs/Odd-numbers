#include <stdio.h>
int i = 0;
#ifndef __cplusplus //---------------------this line and the other one commented are needed for non-windows OS (Kali linux in my case)
typedef int bool;
#define true 1
#define false 0
#endif //----------------------------- line number 2 (OS Problem)

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


int main()
{
	while(1)
	{
		if(IsOdd(i) == true)
		{
			printf("%d is an odd number\n", i);
			i++;
		}
		else
		{
			i++;
		}
	}
}

