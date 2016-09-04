#include<stdio.h>

int main()
{
	int hundred, ten, one;
	for(hundred = 1; hundred <= 9; hundred ++)
	{
		for(ten = 0; ten <= 9; ten ++)
		{
			for(one = 0; one <= 9; one ++)
			{
				if(hundred * hundred * hundred + one * one *one + ten * ten * ten == hundred * 100 + ten * 10 + one)
				{
					printf("%d\n", hundred * 100 + ten * 10 + one);
				}
			}
		}
	}	
} 
