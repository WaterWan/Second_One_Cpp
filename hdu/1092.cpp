#include<iostream>
using namespace std;
int main()
{
	int N,i,a,sum;
	while((cin>>N) && N)
	{
		sum = 0;
		for(i = 0; i < N; i++)
		{
			cin >> a;
			sum += a;
		}
		cout << sum << endl;
	}
}
