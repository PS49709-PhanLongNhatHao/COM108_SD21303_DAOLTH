#include<stdio.h>
#define LuongCB 1500000
#define NgayCongQuyDinh 25

struct NhanVien {
    int MaNV;
    char Hovaten[50];
    int Songaycong;
    float Luong;
};

float Tinhluong(int Songaycong){
    if(Songaycong<NgayCongQuyDinh){
        return LuongCB * 0.9;
    }else if(Songaycong == NgayCongQuyDinh){
        return LuongCB;
    }else{
        int du = Songaycong - NgayCongQuyDinh;
        return LuongCB + du * (LuongCB / NgayCongQuyDinh) * 2;
    }
}

void Nhapthongtin(struct NhanVien nv1[],int n){
    for(int i=0;i<n;i++){
        printf("Nhan vien thu %d",i+1);
        printf("\nHay nhap ma nhan vien:");
        scanf("%d",&nv1[i].MaNV);
        getchar();
        printf("Hay nhap ho va ten:");
        gets(nv1[i].Hovaten);
        printf("Hay nhap so ngay cong:");
        scanf("%d",&nv1[i].Songaycong);
        nv1[i].Luong = Tinhluong(nv1[i].Songaycong);
    }
}

void Xuatthongtin(struct NhanVien nv1[],int n){
    
    for(int i=0;i<n;i++){
        //printf("Thong tin nhan vien thu %d\n",i+1);
        printf("MaNV: %d - HovaTen: %s - Songaycong: %d - Luong: %fVND\n",
        nv1[i].MaNV,nv1[i].Hovaten,nv1[i].Songaycong,nv1[i].Luong);
    }
}

void Xapsep(struct NhanVien nv1[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nv1[i].Songaycong>nv1[j].Songaycong){
                struct NhanVien nvTemp = nv1[i];
                nv1[i] = nv1[j];
                nv1[j] = nvTemp;
            }
        }
    }
}

int main(){
    struct NhanVien ds[50];
    int n;
    printf("Hay nhap so nhan vien:");
    scanf("%d",&n);
    Nhapthongtin(ds,n);
    Xapsep(ds,n);
    Xuatthongtin(ds,n);
    return 0;
}