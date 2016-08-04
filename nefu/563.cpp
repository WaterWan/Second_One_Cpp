#include<stdio.h>

#define N 110
int num[N];
int n;

long long dfs(int n);

int main(){
	while(scanf("%d", &n) != EOF){
		printf("%lld\n",dfs(n));
	}	
} 

long long dfs(int n){
	if(n == 0){
		return 2;
	}
	long long d = (dfs(n-1) + 2) * 2;
	return d;
}
