#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int a[5000001], b[5000001], cha[5000002];

void chuli(){
	memset(a, 0, sizeof(a));
	memset(cha, 0, sizeof(cha));
	char ch;
	while(ch = getchar(), ch != ' '){
		cha[0] ++;
		cha[cha[0]] = ch - '0';
	}
	a[0] = cha[0];
	for(int i = 1; i <= cha[0]; i++){
		a[i] = cha[cha[0] + 1 - i];
	}
	memset(b, 0, sizeof(b));
	memset(cha, 0,sizeof(cha));
	while(ch = getchar(), ch != '\n'){
		cha[0]++;
		cha[cha[0]] = ch - '0';
	}
	b[0] = cha[0];
	for(int i = 1; i <= cha[0]; i++){
		b[i] = cha[cha[0] + 1 - i];
	}
} 

void pd(){
	bool fg = false;
	if(a[0] < b[0]){
		fg = true;
	}
	if(a[0] == b[0]){
		for(int i = a[0]; i >= 1; i--){
			if(a[i] > b[i]){
				fg = false;
				break;
			}
			if(a[i] < b[i]){
				fg = true;
				break;
			}
		}
	}
	if(fg){
		memset(cha, 0, sizeof(cha));
		for(int i = 0; i <= a[0]; i++){
			cha[i] = a[i];
		}
		memset(a, 0, sizeof(a));
		for(int i = 0; i <= b[0]; i++){
			a[i] = b[i];
		}
		memset(b, 0, sizeof(b));
		for(int i = 0; i <= cha[0]; i++){
			b[i] = cha[i];
		}
	}
	if(fg){
		printf("-");
	}
}
	
void jian(){
	memset(cha, 0, sizeof(cha));
	cha[0] = a[0];
	for(int i = 1; i <= cha[0]; i++){
		if(a[i] < b[i]) {
			a[i] += 10;
			a[i+1]--;
		}
		cha[i] = a[i] - b[i];
	}
}

void shuchu(){
	while(cha[0] > 1 && cha[cha[0]] == 0){
		cha[0] --;
	}
	for(int i = cha[0]; i >= 1; i--){
		printf("%d", cha[i]);
	}
	printf("\n");
}

int main(){
	int n;
	scanf("%d", &n);
	getchar();
	for(int i = 1; i <= n; i++){
		chuli();
		pd();
		jian();
		shuchu();
	}
}
