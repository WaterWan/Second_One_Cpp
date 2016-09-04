#include<stdio.h>

int main()
{
	int num;
	int mod3, mod5, mod7;
	scanf("%d %d %d", &mod3, &mod5, &mod7);
	for(num = 10; num <= 100; num ++)
	{
		if(num % 3 == mod3 && num % 5 == mod5 && num % 7 == mod7)
		{
			printf("%d", num);
			break;
		}
	}
	if(num == 101){
		printf("No answer");
	}
}
