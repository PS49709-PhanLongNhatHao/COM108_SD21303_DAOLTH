#include <stdio.h>
#include <string.h>

struct sinhvien
{
    char hoten[50];
    float toan, ly, hoa;
    float dtb;
};
void thongtin(struct sinhvien *SV)
{
    printf("Ho ten: ");
    gets(SV->hoten);
    printf("Toan: ");
    scanf("%f", &SV->toan);
    printf("Ly: ");
    scanf("%f", &SV->ly);
    printf("Hoa: ");
    scanf("%f", &SV->hoa);
}
float dtb (float t, float l, float h)
{
    return (t + l + h)/3;
}
void xeploai(float dtb)
{
    printf("Xep loai: ");
    if (dtb >= 8.5){
        printf("GIOI");
    } else if(dtb >= 6.5){
        printf("KHA");
    } else if(dtb >= 5){
        printf("TRUNG BINH");
    } else {
        printf("YEU");
    }
}
int main(){
    struct sinhvien SV1;
    thongtin(&SV1);
    SV1.dtb = dtb(SV1.toan, SV1.ly, SV1.hoa);
    printf("\nHo ten %s", SV1.hoten);
    printf("\nDiem trung binh %.2f", SV1.dtb);
    printf("\n");
    xeploai(SV1.dtb);
    return 0;
}