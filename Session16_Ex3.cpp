#include <stdio.h>
void tong(int *num1,int *num2,int *sum){
	*sum=*num1 + *num2;
}

int main(){
	int num1=21;
	int num2=25;
	int sum;
	tong(&num1,&num2,&sum);
	printf("Tong cua 2 so la: %d",sum);
	return 0;
}
