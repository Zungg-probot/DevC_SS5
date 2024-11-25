#include<stdio.h>

int main(){
	int a;
	int b = 20;
	while(a != b){
		printf("\nNhap vao 1 so bat ki, kiem tra trung voi so con lai: ",a);
		scanf("%d", &a);
	}
	printf("So trung voi so ban nhap la %d!",b);
}
