#include <stdio.h>
int main (){
	char luachon;
	printf("nhap thu trong tuan\n");
   scanf("%c",&luachon);
	switch( luachon){
	case '2':
		printf("hom nay la thu hai\n\a");
		break;
	case '3':
		printf("hom nay la thu ba\n\a");
		break;
	case '4':
		printf("hom nay la thu 4\n\a");
		break;
	case '5':
		printf("hom nay la thu nam\a\n");
		break;
	case '6':
		printf("hom nay la thu sau\a\n");
		break;
	case '7':
		printf("hom nay la thu bay\n\a");
		break;
	case '8':{
		
		printf("\a\nhom nay la chu nhat");
		break;
	}default:
	printf("\nban da nhap sai moi nhap lai");
	}
}
