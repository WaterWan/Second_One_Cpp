#include<iostream>
#include<string.h>
#include<stdio.h> 

using namespace std;

int main(){
	const int maxn = 20000;
	int n, c, k;
	int f[maxn + 1];
	while(cin >> n){
		memset(f,0,sizeof(f));
		f[0] = 1;
		for(int i = 1; i <= n; i++){
			c = 0;
			for(int j = 0; j <= maxn; j++){
				int s = f[j] * i + c;
				f[j] = s % 100000;
				c = s / 100000;
			}
		}
		for(k = maxn; k >= 0; k--){
			if(f[k] != 0){
				break;
			}
		}
		cout << f[k];
		for(int j = k - 1; j >= 0; j--){
			printf("%05d",f[j]);
		}
		printf("\n");
	}
	return 0;
}
