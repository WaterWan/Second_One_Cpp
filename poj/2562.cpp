#include<iostream>
#include<string.h>

using namespace std;

void getNumber(char str[], int c[]);

int main(){
	char a[11],b[11];
	int n[11] = {0}, m[11] = {0}, i, len, num;
	while(cin>>a>>b){
		if(strcmp(a,"0") == 0 && strcmp(b,"0") == 0){
			break;
		}
		num = 0;
		getNumber(a,n);
		getNumber(b,m);
		for(i = 0; i < 11; i++){
			if(n[i] + m[i] > 9){
				n[i+1] += (n[i] + m[i]) / 10;
				n[i] = m[i] = 0;
				num++;
			}
		}
		if(num == 0){
			cout << "No carry operation." << endl;
		}
		if(num == 1){
			cout << num << " carry operation." << endl; 
		}
		if(num > 1){
			cout << num << " carry operations." << endl;
		}
	}
	
}

void getNumber(char str[], int c[]){
	int i, len = strlen(str);
	for(i = 0; i < len; i++){
		c[i] = str[len - i - 1] - '0';
	}
	
}
