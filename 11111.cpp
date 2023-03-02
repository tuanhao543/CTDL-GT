#include<stdio.h>
#include<conio.h>

long Giaithua(int n)
{
    if(n == 0) 
        return 1;
		
    return n * Giaithua(n - 1);
}

int main()
{
    int n, GT;
    printf("Nhap n = "); scanf("%d", &n);

    GT = Giaithua(n);
    printf("GT= %d", GT);

    getch();
    return 0;
}


