#include <stdio.h>

void addE(int arr[],int addValue,int posi,int length){
	if(posi>=0&&posi<length){
		arr[posi]=addValue;
	}else{
		printf("Nhap vi tri khong hop le\n");
	}
}

int main(){
	int arr[]={1,2,3,4,5};
	int length=sizeof(arr)/sizeof(arr[0]);
	printf("Mang hien co: ");
	for(int i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	addE(arr,6,4,length);
	printf("Mang moi: ");
	for(int i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
