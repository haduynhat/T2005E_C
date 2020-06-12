#include<stdio.h>

int main()
{
    int i, n;
    int S;
    printf("\nNhap n: ");
    scanf("%d", &n);
    i = 1;
    S = 0;
    for(i=1; i<=n; i++)
    {
        if(n % i == 0)
        {
            printf("\ncac uoc la: %d", i);
           S = S + i;
        }
    }
    printf("\nTong cac uoc cua %d la: %d",n, S);
}
