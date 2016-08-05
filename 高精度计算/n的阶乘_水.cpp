#include<iostream>

using namespace std;

long long getNum(int n){
	if(n == 1){
		return 1;
	}else {
		return getNum(n - 1) * n;
	}
}

int main(){
	int x;
	while(cin >> x){
		cout << getNum(x) << endl; 
	}
} 
