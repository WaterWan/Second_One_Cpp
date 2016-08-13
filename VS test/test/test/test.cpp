#include <iostream>
#include <stdlib.h>
using namespace std;

int getMaxOrMin(int *arr, int count, bool isMax);

int main() {
	int arr1[4] = { 3, 5, 1, 7 };
	bool isMax = false;
	cin >> isMax;
	cout << getMaxOrMin(arr1, 4, isMax) << endl;
	system("pause");
	return 0;
}

int getMaxOrMin(int *arr, int count, bool isMax) {
	int temp = arr[0];
	if(isMax){
		for (int i = 1; i < count; i++) {
			if (temp < arr[i]) {
				temp = arr[i];
			}
		}
	} else {
		for (int i = 1; i < count; i++) {
			if (temp > arr[i]) {
				temp = arr[i];
			}
		}
	}

	return temp;
}



