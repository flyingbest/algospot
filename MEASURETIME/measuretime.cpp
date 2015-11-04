#include <iostream>
#include <stdio.h>
using namespace std;

int InsertionSort(int arr[], int size){
	int j, tmp, cnt = 0;
	for(int i = 1; i < size; i++){
		j = i;
		while(j > 0 && arr[j-1]>arr[j]){
			tmp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = tmp;
			cnt++;
			j--;
		}
	}
	return cnt;
}

int main(){
	
	int Testcase, arrlen;
	scanf("%d", &Testcase);

	for(int i = 0; i < Testcase; i++){
		scanf("%d", &arrlen);
		int* arr = new int[arrlen];
		for(int j = 0; j < arrlen; j++){
			scanf("%d", &arr[j]);
		}
		int total = InsertionSort(arr, arrlen);
		cout << total << endl;
		delete[] arr;
		arr = NULL;
	}
	
	return 0;
}
