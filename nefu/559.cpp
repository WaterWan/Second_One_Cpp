#include<stdio.h>
#include<cstring>

#define N 555

int map[N][N];

int ans[N],n;

bool vis[N];

bool search(int m);

void show();

int main(){
	freopen("1.txt", "r", stdin);
	freopen("2.txt", "w", stdout);
	while(scanf("%d",&n) != EOF){
		memset(vis,0,sizeof(vis));
		memset(ans,0,sizeof(ans));
		for(int i = 0;i < n; i++){
			for(int j = 0; j < n; j++){
				scanf("%d", &map[i][j]);
			}
		}
		show();
		if(search(0)){
			printf("result\n");
			printf("%d",ans[0]);
			for(int i = 1; i < n; i++){
				printf(" %d",ans[i]);
			}
			printf("\n");
		}
	}
}

bool search(int m){
//	show();
	printf("m: %d\n", m);
	if(m == n){
		return true;
	}
	for(int i = 0; i < n; i++){
		printf("i: %d\n",i);
		if(!vis[i] && map[m][i]){
			ans[m] = i + 1;
			vis[i] = 1;
			show();
			if(search(m + 1)){
				return true;
			}
			printf("Warning!!!\n");
			printf("m: %d\n", m);
			vis[i] = 0;
		}
	}
	return false;
}

void show(){
	printf("Book:  ");
	for(int i = 0; i < n; i ++){
		printf("%d ",ans[i]);
	}
	printf("\n");
	printf("Visit: ");
	for(int i = 0; i < n; i ++){
		printf("%d ",vis[i]);
	}
	printf("\n\n");
}
