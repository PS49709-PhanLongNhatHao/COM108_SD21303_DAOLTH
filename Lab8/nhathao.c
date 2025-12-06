#include<stdio.h>
#include<string.h>

//#Bai 1: XÂY DỰNG CHƯƠNG TRÌNH LƯU THÔNG TIN SINH VIÊN 
//Tạo kiểu dữ liệu sinh viên 
struct SinhVien {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

void nhapthongtin(struct SinhVien sv1[],int n){
    for(int i=0;i<n;i++){
        //Nhập thông tin sinh viên
        printf("Sinh vien thu %d",i+1);
        printf("\nHay nhap ma so sinh vien:");
        scanf("%s",&sv1[i].mssv);
        getchar();
        printf("Hay nhap ho va ten:");
        gets(sv1[i].tenSV);
        printf("Hay nhap ten nganh hoc:");
        gets(sv1[i].nganhHoc);
        printf("Hay nhap diem trung binh:");
        scanf("%f",&sv1[i].diemTB);
    }
}

void xuatthongtin(struct SinhVien sv1[],int n){
    //Xuất thông tin sinh viên ra màn hình
    for(int i=0;i<n;i++){
        printf("Thong tin sinh vien thu %d\n",i+1);
        printf("MSSV: %s - HovaTen: %s - NganhHoc: %s - DiemTB: %.2f\n",
        sv1[i].mssv,sv1[i].tenSV,sv1[i].nganhHoc,sv1[i].diemTB);
    }
}

//#Bai 2: Sap xep sinh vien theo diem tang dan 
void sapxep(struct SinhVien sv1[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(sv1[i].diemTB>sv1[j].diemTB){
                struct SinhVien svTemp = sv1[i];
                sv1[i] = sv1[j];
                sv1[j] = svTemp;
            }
        }
    }
}

//#Bai 3: Tim kiem sinh vien
void timkiem(struct SinhVien sv1[],int n,char msvv[50]){
    for(int i=0;i<n;i++){
        if(strcmp(msvv,sv1[i].mssv)==0){
            printf("MSSV: %s - HovaTen: %s - NganhHoc: %s - DiemTB: %.2f\n",
            sv1[i].mssv,sv1[i].tenSV,sv1[i].nganhHoc,sv1[i].diemTB);
            return;
        }
    }
    printf("Khong tim thay ma sinh vien vua nhap\n",msvv);
}

int main(){
    struct SinhVien ds[50];
    int n;
    char mssv[50];
    printf("Nhap so sinh vien moi them:");
    scanf("%d",&n);
    nhapthongtin(ds,n);
    sapxep(ds,n);
    xuatthongtin(ds,n);
    printf("Hay nhap ma sinh vien can tim:");
    scanf("%s",&mssv);
    timkiem(ds,n,mssv);
    return 0;
}