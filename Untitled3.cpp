#include<stdio.h>
#include<conio.h>

struct HopSua
{
    char NhanHieu[20];
    float TrongLuong;
    int HanSuDung;
};
typedef struct HopSua HOPSUA ;

void NhapHopSua(HOPSUA &h)
{
    fflush(stdin);
    printf("Nhap nhan hieu: \n");
    scanf("%s", &h.NhanHieu);

   
    printf("Nhap trong luong: \n");
    scanf("%f", &h.TrongLuong);  

    printf("Nhap han su dung: \n");
    scanf("%d", &h.HanSuDung);
}

void XuatHopSua(HOPSUA h)
{
    printf("Nhan Hieu: %s\n", h.NhanHieu);
    printf("Trong Luong: %.1f\n", h.TrongLuong);
    printf("Han Su Dung: %d (Ngay)\n", h.HanSuDung);
}

int main()
{
    HOPSUA h1;
    NhapHopSua(h1);
    XuatHopSua(h1);

    getch();
    return 0;
}
