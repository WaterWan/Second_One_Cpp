#include<iostream>
using namespace std;
int main() 
{
	int num, a, sum, i;
	while(cin >> num)
	{
		sum = 0;
		for(i = 0; i < num; i++ )
		{
			cin >> a;
			sum += a;
		}
		cout << sum << endl;
	}
}