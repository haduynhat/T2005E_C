#include <stdio.h>
int main(){
	int n;
	int trungbinhcong=0;
	int nso=0;
	printf("nhap so phan tu n\n");
	scanf("%d",&n);
	int a[n];
	for(int i=0 ; i<n; i++){
		printf("nhap pt:\n");
		scanf("%d",&a[i]);
}
	int i =0;
	for(i=0;i<n;i++)
		if(a[i]%2!=0) 
		{	trungbinhcong= trungbinhcong+a[i];
			nso++;
		}
		
	printf(" trung binh cong so le la %d  ",trungbinhcong/nso);
}	
