#include<stdio.h>
int main(){
	int a,b,ucln;
	printf("Nhap vao so dau tien: ");
	scanf("%d",&a);
	printf("Nhap vao so thu hai: ");
	scanf("%d",&b);
	if(a < 0 || b < 0){
		printf("So nhap khong hop le!");
		return 0;
	}
	for(ucln = a;ucln >= 1;ucln--){
		if(a % ucln == 0 && b % ucln ==0){
			break;
		}
	}
	float bcnn= (a * b) / ucln;
	printf("%.2f la boi chung nho nhat cua hai so", bcnn);
	return 0;
}
