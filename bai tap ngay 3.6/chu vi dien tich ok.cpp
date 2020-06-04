#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,P,chuvi,dientich;
	printf("nhap canh thu nhat:");
	scanf("%lf", &a);
	printf("nhap canh thu hai:");
	scanf("%lf", &b);
	printf("nhap canh thu ba:");
	scanf("%lf", &c);
	if ((a+b>c) && (b+c>a) && (a+c>b)){
		printf("ba so la ba canh tam giac");
	chuvi=(a+b+c);
	P=((a+b+c)/2);
	dientich=sqrt(P*(P-a)*(P-b)*(P-c));
	printf("%lf la chu vi  tam giac",chuvi);
	printf("%lf la dien tich tam giac",dientich);
	}else{
		printf("ba so da cho khong phai canh tam giac");}
}


