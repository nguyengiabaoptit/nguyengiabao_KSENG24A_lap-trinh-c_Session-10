#include <stdio.h> 

int main(){
	int arr[]={1,2,3,4,5,6,7};
	int searchValue=5;
	int start = 0;
	int end = sizeof(arr)/sizeof(int);
	int mid;
	while(start<=end){
		mid=(start+end)/2;
		if(arr[mid]==searchValue){
			printf("vi tri can tim o vi tri %d\n", mid);
			return 0;
		}else if(arr[mid]>searchValue){
			end = mid-1;
		}else{
			start=mid+1;
		}	 
	}
	printf("khong tim thay phan tu can tim");
	return 0;
	
}
