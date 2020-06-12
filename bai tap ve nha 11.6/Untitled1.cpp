#include <stdio.h>
int main(){
	float tiengui;
	int nhanduoc;
	printf("nhap so tien muon gui vao:\n");
	scanf("%f",&tiengui);
	printf("nhap so tien muon nhan duoc:\n");
	scanf("%d",&nhanduoc);
	for(int i=0;i<nhanduoc;i++) {
	float lai =  nhanduoc - tiengui;
	float sonam = lai/(tiengui*0.08);
	printf("so nam can gui la: %f", sonam);
	break;
	}
}
	
