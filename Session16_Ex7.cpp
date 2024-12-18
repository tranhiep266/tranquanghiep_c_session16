#include <stdio.h>
#include <stdlib.h>

void sortArr(int *arrPtr,int length){
	for(int i=0;i<length-1;i++){
		for(int j=0;j<length-i-1;j++){
			if(arrPtr[j]>arrPtr[j+1]){
				int temp = arrPtr[j];
				arrPtr[j]=arrPtr[j+1];
				arrPtr[j+1]=temp;
			}
		}
	}
}

int main(){
	int *arrPtr;
	int length;
	printf("So phan tu cua Mang: ");
	scanf("%d",&length);
	arrPtr=(int*)malloc(length*sizeof(int));
	for(int i=0;i<length;i++){
		printf("Phan tu arr[%d]= ",i);
		scanf("%d",&arrPtr[i]);
	}
	printf("Mang truoc khi sap xep: \n");
	for(int i=0;i<length;i++){
		printf("%d ",arrPtr[i]);
	}
	printf("\n");
	sortArr(arrPtr,length);
	printf("Mang sau khi sap xep: \n");
	for(int i=0;i<length;i++){
		printf("%d ",arrPtr[i]);
	}
	free(arrPtr);
	return 0;
}
