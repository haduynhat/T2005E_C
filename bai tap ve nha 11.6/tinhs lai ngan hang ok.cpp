#include <stdio.h>
int main(){
	float tiengui;
	int namgui;
	printf("nhap so tien muon gui vao:\n");
	scanf("%f",&tiengui);
	printf("nhap so nam muon gui:\n");
	scanf("%d",&namgui);
	for(int i=0;i<namgui;i++) {
	float lai =  (tiengui *(0.08)) * namgui;
	float tong = tiengui + lai;
	printf("so tien nhan duoc la: %f", tong);
	break;
	}
}
	
	
