#include<iostream>
using namespace std;
int main()
{
	int fatherSum, sonSum, sum, a, i, j;
	cin >> fatherSum;
	for(i = 0; i < fatherSum; i++)
	{
		cin >> sonSum;
		sum = 0;
		for(j = 0; j < sonSum; j ++)
		{
			cin >> a;
			sum += a;
		}
		cout << sum << endl;
	}
	return 0;
}
