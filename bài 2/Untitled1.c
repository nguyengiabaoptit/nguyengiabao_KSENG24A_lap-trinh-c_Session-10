#include <stdio.h>

int main(){
	int array[4] = {3,7,9,2};
	int arraylenght = sizeof(array)/sizeof(int);
	printf("mang chua duoc sap xep:");
	int i;
	for(i = 0; i<arraylenght; i++){
	   printf("%d \t", array[i]);
	}
	for(i = 0; i<arraylenght; i++){
		int j;
		for(j = 0; j<arraylenght; j++){
			if(array[j+1]<array[j]){
				int sum = array[j];
				array[j] = array[j+1];
				array[j+1] = sum;
			}
		}
	}
	printf("\n mang da duoc sap xep:");
	for(i = 0; i<arraylenght; i++){
	   printf("%d \t", array[i]);
	}
	return 0;
}
