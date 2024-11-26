#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c,n;
	float tong= a + b + c;
	int min =a, max =a;
	while(1){
		printf("Nhap lua chon cua ban (1-6): ");
		scanf("%d",&n);
	switch(n){
		case 1:
			printf("\nNhap vao 3 so bay ky: ");
	        scanf("%d %d %d",&a,&b,&c);
			break;
		case 2:
			printf("\nTong 3 so la: %f\n",tong);
			break;
		case 3:
			printf("\nTrung binh cong 3 so la: %.2f\n",tong/3);
			break;
		case 4:
			if(b<min){
		    min = b;
	        }
	        if(c<min){
	    	min = c;
        	}
        	printf("So nho nhat trong 3 so la: %d\n",min);
			break;
		case 5:
			if(b>max){
     		max = b;
        	}
        	if(c>max){
	    	max = c;
        	}
        	printf("\nSo lon nhat  trong 3 so la: %d\n",max);
			break;
		case 6:
			exit(0);
	}
	}
}
