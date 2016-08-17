#include<stdio.h>
#include<string.h>

char a[101], b[101];
int len_a, len_b;
int ai[101], bi[100];
int temp[202];
char product[201];
void reverse(char s[], int si[]){
	int len = strlen(s);
	for(int i = 0; i < len; i++){
		si[len - 1 - i] = s[i] - '0';
	}
}
 
 int main(){
 	int i, j;
 	while(scanf("%s", a) != EOF){
 		scanf("%s", b);
 		len_a = strlen(a);
 		len_b = strlen(b);
 		reverse(a, ai);
 		reverse(b, bi);
 		memset(temp, 0, sizeof(temp));
 		memset(product, 0, sizeof(product));
 		for(i = 0; i < len_b; i++){
 			int start = i;
 			for(j = 0; j < len_a; j++){
 				temp[start++] += ai[j] * bi[i];
			 }
		 }
		 
		for(i = 0; i < 202; i++){
			if(temp[i] > 9){
				temp[i + 1] += temp[i] / 10;
				temp[i] = temp[i] % 10;
			}
		}
		
		for(i = 201; i >= 0; i--){
			if(temp[i]){
				break;
			}
		}
		int lenp = i + 1;
		for(i = 0; i < lenp; i++){
			product[lenp - 1 - i] = temp[i] + '0';
		}
		product[lenp] = 0;
		printf("%s\n", product);
	 }
	 return 0;
 }
