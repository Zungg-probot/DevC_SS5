#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap vao 3 so bay ky ");
	scanf("%d %d %d",&a,&b,&c);
	float tong= a + b + c;
	printf("Tong 3 so la: %f\n",tong);
	printf("Trung binh cong 3 so la: %.2f\n",tong);
	int min =a, max =a;
	if(b<min){
		min = b;
	}
	if(c<min){
		min = c;
	}
	if(b>max){
		max = b;
	}
	if(c>max){
		max = c;
	}
	printf("So lon nhat va nho nhat trong 3 so la: %d %d\n",max,min);
}

