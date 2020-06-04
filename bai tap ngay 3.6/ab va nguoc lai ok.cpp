#include <stdio.h>
int main(){
	float a,b,kq;
	printf("nhap a:");
	scanf("%f", &a);
	printf("nhap b:");
	scanf("%f", &b);
	if (a>=b){
	kq=a/b;
	printf("ket qua cua a/b bang:%f",kq);
	}else{
		kq=a*b;
		printf("ket qua cua a*b bang:%f",kq);
	}
 
	
}
