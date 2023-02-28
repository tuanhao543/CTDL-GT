#include<stdio.h>
#include<conio.h>

// Khai báo ki?u d? li?u c?u trúc phân s?
struct HonSo
{
    int PhanNguyen, TuSo, MauSo;
};

typedef struct HonSo HONSO;

void NhapHonSo(HONSO &);
void XuatHonSo(HONSO);

void NhapHonSo(HONSO &hs)
{
    printf("\nNhap vao phan nguyen: ");
    scanf("%d", &hs.PhanNguyen);
     printf("\nNhap vao tu so: ");
    scanf("%d", &hs.TuSo);

    do
    {
        printf("\nNhap vao mau so: ");
        scanf("%d", &hs.MauSo);

        if(hs.MauSo == 0)
        {
            printf("\nMau so phai khac 0. Xin kiem tra lai !");
        }
    }while(hs.MauSo == 0);
}

void XuatHonSo(HONSO hs)
{
    printf("%d %d/%d", hs.PhanNguyen, hs.TuSo, hs.MauSo);
}
int main()
{
    HonSo hs;
    NhapHonSo(hs);
    XuatHonSo(hs);

    

    getch();
    return 0;
}

