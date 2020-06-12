#include <stdio.h>
int main (){
	char luachon;
	printf("nhap ki tu ban chon\n");
   scanf("%c",&luachon);
	switch( luachon){
	case 'y':
	case 'Y':
	case 'n':
	case 'N':{
		printf("\a\nBan da chon dung");
		break;
	}default:
	printf("\nban da nhap sai moi nhap lai");
	}
}
