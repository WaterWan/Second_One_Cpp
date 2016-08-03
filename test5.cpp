#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
	int a;
	int sum = 0;
	char c;
//	while(scanf("%d", &a) == 1){
//		sum += a;
//		while((c = getchar()) == ' ');
//		if(c == '\n'){
//			break;
//		}
//		ungetc(c, stdin);
//	}
//	printf("sum:%d\n",sum);
//	printf("c:%c", c);


	while(cin>>a){
		sum += a;
	
		while(cin.peek() == ' '){
			cin.get();
		}
		if(cin.peek() == '\n'){
			break;
		}
	}
	cout << sum << endl;
} 
