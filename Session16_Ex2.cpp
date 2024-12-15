#include <stdio.h>

void swap(int *input1,int *input2){
	int temp=*input1;
	*input1=*input2;
	*input2=temp;
}

int main(){
	int input1=21 ;
	int input2=25 ;
	printf("Bien 1 truoc khi doi: %d\n",input1);
	printf("Bien 2 truoc khi doi: %d\n",input2);
	swap(&input1,&input2);
	printf("Bien 1 sau khi doi: %d\n",input1);
	printf("Bien 2 sau khi doi: %d\n",input2);
	return 0; 
}
