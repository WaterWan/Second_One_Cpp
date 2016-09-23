#include<iostream>
using namespace std;

int main()
{
	int o = 0;
	int score = 0;
	char temp;
	while((temp = cin.get()) != '\n') 
	{
		if(temp == 'o') 
		{
			o++;
			score += o;
		}
		else
		{
			o = 0;
		}
	}
}
