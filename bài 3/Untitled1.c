#include <stdio.h>

int main(){
	int numbers[4] = {2,1,5,4};
	int i,j;
	int arrSize = sizeof(numbers)/sizeof(int);
	printf("Mang chua duoc sap xep:");
	for(i=0; i<arrSize; i++){
	   printf("%d\t",numbers[i]);
    }
    for(i=0; i<arrSize; i++){
    	int min = numbers[i];
    	for(j =i+1; j<arrSize; j++){
    		if(numbers[j]<min){
    			min = numbers[j];
    			numbers[j] = numbers[i];
    			numbers[i] = min;
			}
		}
    }
    printf("\nMang da duoc sap xep:");
    for(i=0; i<arrSize; i++){
    	printf("%d\t",numbers[i]);
    }
    return 0;
}
