#include<stdio.h>
int main(){
	int a;
	int b =1;
	printf("Nhap so bat ki tu 1 den 10: ");
	scanf("%d",&a);
	int tich = a;
	if(a>0 && a<11){
		do{
		tich = a * b++;
		printf("%d * %d = %d \n",a, b-1, tich);
	}while(b<11);
	}else{
		printf("So ban nhap khong hop le!");
	}
	


}
