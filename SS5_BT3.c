#include<stdio.h>
int main(){
	int a,b;
	int tong = 0;
	printf("Nhap so nguyen duong bat ki: ");
	scanf("%d", &a);
	while(b < a){
		tong = tong + b++;
	}
	tong = tong + a;
	printf("Tong la: %d",tong);
}
