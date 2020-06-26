#include <stdio.h>

void nhapMang(int ary[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap pt thu %d: \n",i);
		scanf("%d",&ary[i]);
	}
}
void trungbinhcong(int ary[],int n){
		int i =0;
		int nso;
	for(i=0;i<n;i++){
		float trungbinhcong=+ary[i];
		nso++;
		}
}
void inMang(int ary[],int n){
	for(int i=0;i<n;i++){
		printf("%d\n",ary[i]);
	}
}

int main(){
	int ary[4];
	nhapMang(ary,4);
	trungbinhcong(ary,4);
	inMang(ary,4);
	printf("\n");
	printf("gia tri trungbinh cong cua mang la: %f ", float (trungbinhcong /nso));
	return 0;
}
