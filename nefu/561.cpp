#include<stdio.h>
#define N 31
char map[N][N];

int m, n;

int dfs(int x, int y);

int main(){
	freopen("561_1.txt", "r", stdin);
	freopen("561_2.txt", "w", stdout);
	while(scanf("%d%d", &m, &n) != EOF){
		if(m == 0 && n == 0){
			break;
		}
		int ans = 0;
		for(int i = 0; i < n; i++){
			scanf("%s", map[i]);
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(map[i][j] == '@'){
					ans = dfs(i, j) + 1;
				
				}
			}
		}
		printf("%d\n", ans);
	}
	
}

int dfs(int x, int y){
	int d = 0;
	if(x < 0 || x >= n || y < 0 || y >= m || map[x][y] == '#'){
		return 0;
	}
	if(map[x][y] == '.'){
		d = 1;
		map[x][y] = '#';
	}
	return dfs(x+1, y) + dfs(x, y+1) + dfs(x-1, y) + dfs(x, y-1) + d;
	
	
}
