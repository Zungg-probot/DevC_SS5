#include<stdio.h>
int main(){
	float a,b;
	while(b != 0){
		printf("\nNhap so dau tien: ");
		scanf("%f", &a);
		printf("Nhap so thu hai: ");
		scanf("%f", &b);
		printf("Tong 2 so la %.2f\n",a + b);
		printf("Hieu 2 so la %.2f\n",a - b);
		printf("Tich 2 so la %.2f\n",a * b);
		printf("Thuong 2 so la %.2f\n",a / b);
	}
	return 0;
}
