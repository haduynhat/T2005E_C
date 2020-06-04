#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,denta,x1,x2,S;
	printf("nhap a:");
	scanf("%f", &a);
	printf("nhap b:");
	scanf("%f", &b);
	printf("nhap c:");
	scanf("%f", &c);
	denta=(b*b)-(4*a*c);
	if (denta>0){
	S=sqrt(denta);
	x1=(-b+S)/(2*a);
	x2=(-b-S)/(2*a);
	printf("phuong trinh co hai nghiem phan biet la %f",x1);
	printf("va x2 la %f",x2);}
	else
	if (denta==0){
	;
	x1=x2=(-b)/(2*a);
	printf("phuong trinh co nghiem kep la %f",x1,x2);}
	else
	if (denta<0){
	;
	printf("phuong trinh vo nghiem");}

}
