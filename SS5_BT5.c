#include<stdio.h>
int main(){
	int a;
	for(a=1;a<10;a++){
		printf("bang cuu chuong %d \n",a);
		int b =1;
		int tich = a;
		while(b<11){
		tich = a * b++;
		printf("%d * %d = %d \n",a, b-1, tich);
	}
	}
	return 0;
	}

	



