#include <stdio.h>
int main(){
	int n;
	int min =1;
	printf("nhap n phan tu:\n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
	printf("nhap cac phan tu\n");
	scanf("%d",&a[i]);
   }for(int i=0;i<n;i++){
   	if(a[i]>0)
	   min=a[i];
   }
   for(int i=0;i<n;i++){
   	if(a[i]<min&&a[i]>0)
   	min = a[i];
   }printf("gia tri duong nho nhat la:%d",min);
	
}
