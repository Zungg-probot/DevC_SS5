#include<stdio.h>
int main(){
	int a,b,ucln;
	printf("Nhap vao so dau tien: ");
	scanf("%d",&a);
	printf("Nhap vao so thu hai: ");
	scanf("%d",&b);
	for(ucln = a;ucln >= 1;ucln--){
		if(a % ucln == 0 && b % ucln ==0){
			break;
		}
	}
	printf("%d la uoc chung lon nhat cua hai so", ucln);
	return 0;
}
