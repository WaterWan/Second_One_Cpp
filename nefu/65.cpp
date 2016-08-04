#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int N,i;
	double sum;
	while(cin>>N){
		sum = 0.0;
		for(i = 2; i <= N; i++){
			sum += log10(i);
		}
		cout << (int)sum + 1 << endl;
	}
}
