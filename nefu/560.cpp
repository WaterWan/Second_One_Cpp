#include<stdio.h>
#include<cstring>

#define N 11000
int shu[N];

int half_set(int n);

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		memset(shu,0,sizeof(shu));
		shu[1] = 1;
		printf("%d\n",half_set(n));
	}
}

int half_set(int n){
	int ans = 1;
	if(shu[n]){
		return shu[n];
	}
	for(int i = 1; i <= n/2; i++){
		ans += half_set(i);
	}
	shu[n] = ans;
	return ans;
}
