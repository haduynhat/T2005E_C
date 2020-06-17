#include <stdio.h>
int main(){
	int n;
	int gtc=0;
	printf("nhap so phan tu n\n");
	scanf("%d",&n);
	int a[n];
	for(int i=0 ; i<n; i++){
		printf("nhap pt:\n");
		scanf("%d",&a[i]);
}
 for(int i=0;i<n;i++) {
 
 if(a[i]%2!=0) {
 gtc =a[i];
    }
 }
  printf("Gia Tri le Cuoi Cung la: %d",gtc);
  
}
