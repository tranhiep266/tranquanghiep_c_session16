#include <stdio.h>

void printArr(int *arr,int length){
	for(int i=0;i<length;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[]={1,2,3,4,5};
	int length=sizeof(arr)/sizeof(arr[0]);
	printArr(arr,length);
	return 0;
}
