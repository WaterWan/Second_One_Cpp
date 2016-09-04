#include<stdio.h>

int main()
{
	int n, m;
	while(1)
	{
		scanf("%d %d", &n, &m);
		if(n == 0 && m == 0)
		{
			break;
		}
		double sum = 0;
		for(int i = n; i <= m; i++)
		{
			sum += ((1.0 / i) * (1.0 / i));
		}
		printf("%.5llf\n", sum);
	}
}
