#include <stdio.h>
int main(int argc,const char * argv[]){
	int n=2125;
	int *nPtr=&n;
	printf("Dia chi cua bien n= %lu\n",&n);
	printf("Dia chi cua bien n= %lu\n",nPtr);
	printf("Gia tri cua bien n= %d\n",n);
	printf("Gia tri cua bien n= %d\n",*nPtr);
	return 0;
}
