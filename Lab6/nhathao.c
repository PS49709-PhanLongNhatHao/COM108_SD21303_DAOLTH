#include<stdio.h>

int main(){
    //#Bài 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
    int n;
    //Cho người dùng nhập vào số phần tử của mảng 
    printf("Hay nhap so phan tu cua mang:");
    scanf("%d",&n);
    int mang[n];
    for(int i=0;i<n;i++){
        //Mời người dùng nhập dữ liệu vào trong mảng 
        printf("Hay nhap cho gia tri phan tu thu %d:",i + 1);
        scanf("%d",&mang[i]);
    }
    int tong = 0,count = 0;
    //Duyet mang
    for(int i=0;i<n;i++){
        if(mang[i]%3==0){
            tong += mang[i];
            count++;
        }
    }
    int tb = tong/count;
    //Xuất giá trị trung bình ra màn hình
    printf("Trung binh tong cac so chia het cho 3 trong mang la: %d",tb);
    //#Bài 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG
    int n1;
    //Cho người dùng nhập vào số phần tử của mảng
    printf("\nHay nhap so phan tu cua mang:");
    scanf("%d",&n1);
    int mang1[n1];
    for(int i=0;i<n1;i++){
        //Mời người dùng nhập dữ liệu vào trong mảng 
        printf("Hay nhap cho gia tri phan tu thu %d:",i + 1);
        scanf("%d",&mang1[i]);
    }
    int min,max;
    //Duyet mang
    for(int i=0;i<n1;i++){
        if(mang1[i]<min){
            min = mang1[i];
        }
        if(mang1[i]>max){
            max = mang1[i];
        }
    }
    //Xuất giá trị trung bình ra màn hình
    printf("Gia tri lon nhat la: %d",max);
    printf("\nGia tri nho nhat la: %d",min);
    //#Bài 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
    int n2;
    //Cho người dùng nhập vào số phần tử của mảng
    printf("\nHay nhap so phan tu cua mang:");
    scanf("%d",&n2);
    int mang2[n2];
    for(int i=0;i<n2;i++){
        //Mời người dùng nhập dữ liệu vào trong mảng 
        printf("Hay nhap cho gia tri phan tu thu %d:",i + 1);
        scanf("%d",&mang2[i]);
    }
    //Sap xep mang
    for(int i=0;i<n2;i++){
        for(int j=0;j<n2;j++){
            if(mang2[i]>mang2[j]){
                int hv = mang2[i];
                mang2[i] = mang2[j];
                mang2[j] = hv;
            }
        }
    }
    //Xuat mang
    for(int i=0;i<n2;i++){
        printf("Vi tri thu mang [%d] la: %d\n",i,mang2[i]);
    }
    //#Bài 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU
    int x,y;
    //moi nguoi dung nhap vao x,y tu ban phim 
    printf("Hay nhap so hang:");
    scanf("%d",&x);
    printf("Hay nhap so cot:");
    scanf("%d",&y);
    int mang3[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            //moi nguoi dung nhap du lieu vao ma tran
            printf("Hay nhap cho gia tri phan tu cua hang thu %d va cot thu %d:",i+1,j+1);
            scanf("%d",&mang3[i][j]);
        }
    }
    //Xuat mang binh phuong
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            mang3[i][j] = mang3[i][j] * mang3[i][j];
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("\nBinh phuong cac phan tu trong mang la: %d",mang3[i][j]);
        }
    }
    return 0;
}