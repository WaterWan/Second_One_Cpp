#include<iostream>
#include<string.h>

using namespace std;

int main(){
	const int maxn = 50000;
	int n, c, k;
	int f[maxn + 1];
	while(cin >> n){
		memset(f,0,sizeof(f));
		f[0] = 1;
		for(int i = 1; i <= n; i++){
			c = 0;
			for(int j = 0; j <= maxn; j++){
				int s = f[j] * i + c;
				f[j] = s % 10;
				c = s / 10;
			}
			for(k = maxn; k >= 0; k--){
				if(f[k] != 0){
					break;
				}
			}
			
		}
		for(int j = k; j > 0; j--){
			cout << f[j];
		}
		cout << endl;
	}
} 
