#include<iostream>

using namespace std;

void getMax(int x, int y = 20, int z = 30);

int main(){
	getMax(0);
	getMax(70, 80, 90);
	getMax(100, 200);
}

void getMax(int x, int y, int z)
{
	int max = x;
	if(y > max){
		max = y;
	}
	if(z > max){
		max = z;
	}
	cout << max << endl;
}
