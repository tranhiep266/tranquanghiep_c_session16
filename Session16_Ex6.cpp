#include <stdio.h>

int findE(int arr[],int length,int eFind){
    for(int i=0;i<length;i++){
        if(arr[i]==eFind){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,4,5,6,7};
    int length=sizeof(arr)/sizeof(arr[0]);
    int eFind=7;
    int result=findE(arr,length,eFind);
    if(result!=-1){
        printf("Tim thay tai vi tri: %d\n",result);
    }else{
        printf("Khong tim thay\n");
    }
    return 0;
}

