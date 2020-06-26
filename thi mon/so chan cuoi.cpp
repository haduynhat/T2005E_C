#include <stdio.h>

int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap pt thu %d: \n",i);
		scanf("%d",&a[i]);
	}
	int scc=0;
	for(int i=n-1;i>=0;i--){
		if(a[i] %2==0){
			scc = a[i];
			break;
		}
	}
	if(scc%2!=0){
		printf("Mang ko  co so chan");
	}else{
		printf("So chan cuoi cung: %d",scc);
	}
}
