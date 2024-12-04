#include <stdio.h>

int main(){
	int arr[4] = {3,6,9,2};
	int arrlenght = sizeof(arr) / sizeof(int);
	printf("mang chua duoc sap xep:");
	int i; 
	for(i=0; i<arrlenght; i++){
		printf("%d \t", arr[i]);
	}
	for(i=0; i<arrlenght;i++){
		int min = arr[i];
		int j; 
		for(j = j+1; j<arrlenght; j++){
			if(arr[j]<min){
				min = arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
		}
	}
	printf("\nmang da sap xep:");
	for(i=0; i<arrlenght; i++){
		printf("%d \t", arr[i]);
	}
}
