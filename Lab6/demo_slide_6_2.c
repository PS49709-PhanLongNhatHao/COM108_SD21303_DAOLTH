#include <stdio.h>
// dinh nghia ham
void nhapmang(int a[5]);
void xuatmang(int a[5]);


void nhapmang(int a[5]){
    int i = 0;
    for (i = 0; i < 5; i++){
        printf("a[%d]",i);
        scanf("%d", &a[i]);
    }
}
void xuatmang(int a[5]){
    int i = 0;
    for (i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main(){
    int a[5];
    printf("Nhap mang: ");
    nhapmang(a);
    printf("Xuat mang: ");
    xuatmang(a);
    for (int i = 0; i < 5; i++){
        if (a[i] % 6 == 0)
        printf("Xuat cac phan tu chia cho 6: %d", a[i]);
    }
    return 0;
}    