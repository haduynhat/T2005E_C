#include <stdio.h>

int main() {
	int a,b,c,max;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);
    max=a;
    if(b>max)
    max=b;
    if(c>max)
    max=c;
    printf("So lon nhat la %d", max);
}
