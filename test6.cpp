#include<iostream>

using namespace std;

int main(){
	int width = 4;
	char str[20];
	
	cin.width(5);
	while(cin >> str){
		cout.width(width++);
		cout << str << endl;
		cin.width(5);
	}
	
	return 0;
	
}
