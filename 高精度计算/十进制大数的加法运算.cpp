#include<stdio.h>
#include<string.h>

int main(){
	char buffer[200];
	int array[200][200];
	int answer[200];
	int i, j, k;
	int num_integers;
	int len, maxlen;
	int sum, carry, digit;
	int N;
	scanf("%d", &N);
	for(k = 1; k <= N; k++){
		maxlen = -1;
		memset(array, 0, sizeof(array));
		memset(answer, 0, sizeof(answer));
		for(num_integers = 0; num_integers < 200; num_integers++){
			gets(buffer);
			if(strcmp(buffer,"0") == 0){
				break;
			}
			len = strlen(buffer);
			if(len > maxlen){
				maxlen = len;
			}
			for(i = 0; i < len; i++){
				array[num_integers][i] = buffer[len - 1 - i] - '0';
			}
		}
	}
	for(i = 0; i < maxlen + 2; i++){
		sum = carry;
		for(j = 0; j < num_integers; j++) {
			sum += array[j][i];
			digit = sum % 10;
			carry = sum / 10;
			answer[i] = digit;
		}
	}
	for(i = maxlen + 2; i >= 0; i--){
		if(answer[i] != 0){
			break;
		}
		while(i >= 0){
			printf("%d",answer[i--]);
		}
		printf("\n");
		if(k < N){
			printf("\n");
		}
	}
	return 0;
}
