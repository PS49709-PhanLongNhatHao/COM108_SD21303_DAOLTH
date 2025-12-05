#include<stdio.h>
#include<stdlib.h>

void chucnang1(){
    int x,i,count=0;
    printf("Hay nhap 1 so nguyen x:");
    scanf("%d",&x);
    //Chuong trinh so nguyen
    if(x%2==0){
        printf("%d la so nguyen",x);
    }else{
        printf("%d khong phai la so nguyen",x);
    }
    //Chuong trinh so nguyen to
    for(i=2;i<x;i++){
        if(x%i ==0){
            count++;
        }
    }
    if(count ==0){
        printf("\n%d la so nguyen to",x);
    }else{
        printf("\n%d khong phai so nguyen to",x);
    }
    //Chong trinh so chinh phuong
    for(i=1;i<=x;i++){
        if(i*i ==x){
            printf("\n%d la so chinh phuong",x);
            break;
        }else{
            printf("\n%d khong phai so chinh phuong",x);
            break;
        }
    }
}

void chucnang2(){
    int x,y;
    printf("Hay nhap 1 so nguyen x:");
    scanf("%d",&x);
    printf("Hay nhap 1 so nguyen y:");
    scanf("%d",&y);
    int a = x, b = y;
    //Chuong trinh tinh uoc so lon nhat
    while (b!=0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    int ucln = a;
    //Chuong trinh boi chung nho nhat
    int bcnn = abs(x * y) / ucln;
    printf("Uoc so chung lon nhat cua (%d,%d) la: %d",x,y,ucln);
    printf("\nBoi so chung nho nhat cua (%d,%d) la: %d",x,y,bcnn);
}

void chucnang3(){
    int start,end;
    printf("Hay nhap gio bat dau:");
    scanf("%d",&start);
    printf("Hay nhap gio ket thuc:");
    scanf("%d",&end);
    //Kiem tra hop le thoi gian
    if(start < 12 || end > 23 || start >= end){
        printf("Thoi gian khong hop le! Vui long nhap lai");
    }
    int hours = end - start;
    //So gio tinh gia 150k
    int h1;
    if(hours>3){
        h1 = 3;
    }else{
        h1 = hours;
    }
    //So gio giam 30%
    int h2;
    if(hours>3){
        hours - 3;
    }else{
        h2 = 0;
    }
    float gia1 = h1 * 150000;
    float gia2 = h2 * (150000 * 0.7); //Giam 30% con 70%
    float tong = gia1 + gia2;
    //Giam them 10% neu bat dau tu 14-17
    if(start>=14 && start<=17){
        tong *= 0.9;
    }
    printf("So gio hat: %d gio",hours);
    printf("\nTong tien can thanh toan: %.0f VND",tong);
}

void chucnang4(){
    int sodien;
    double bac1,bac2,bac3,bac4,bac5,bac6;
    printf("Hay nhap so (kwh) dien su dung:");
    scanf("%d",&sodien);
    if(sodien<50){
        bac1 = sodien * 1.678;
        printf("So tien dien ban can dong la: %.1fVND",bac1);
    }else if(sodien>50 && sodien<=100){
        bac2 = sodien * 1.734;
        printf("So tien dien ban can dong la: %.1fVND",bac2);
    }else if(sodien>100 && sodien<=200){
        bac3 = sodien * 2.014;
        printf("So tien dien ban can dong la: %.1fVND",bac3);
    }else if(sodien>200 && sodien<=300){
        bac4 = sodien * 2.536;
        printf("So tien dien ban can dong la: %.1fVND",bac4);
    }else if(sodien>300 && sodien<=400){
        bac5 = sodien * 2.834;
        printf("So tien dien ban can dong la: %.1fVND",bac5);
    }else{
        bac6 = sodien * 2.927;
        printf("So tien dien ban can dong la: %.1fVND",bac6);
    }
}

void chucnang5(){
    int menhgia[] = {500,200,100,50,20,10,5,2,1};
    int sotien;
    printf("Hay nhap so tien can doi:");
    scanf("%d",&sotien);
    printf("Ket qua doi tien:\n");
    for(int i=0;i<9;i++){
        if(menhgia[i]>=sotien){
            continue;
        }
        int soto = sotien / menhgia[i];
        if(soto>0){
            printf("%d to %d\n",soto,menhgia[i]);
            sotien %= menhgia[i];
        }
    }
}

void chucnang6(){
    double soTienVay;
    double laiSuat = 0.05;     // 5% mỗi tháng
    int kyHan = 12;
    printf("Nhap so tien muon vay: ");
    scanf("%lf", &soTienVay);
    double gocMoiThang = soTienVay / kyHan;
    double soDu = soTienVay;
    printf("\n%-6s %-15s %-15s %-18s %-15s\n",
           "Thang", "Lai phai tra", "Goc phai tra", "Tong tien phai tra", "So du con lai");
    for (int thang = 1; thang <= kyHan; thang++) {
        double lai = soDu * laiSuat;
        double tong = lai + gocMoiThang;
        soDu -= gocMoiThang;
        printf("%-6d %-15.0f %-15.0f %-18.0f %-15.0f\n",
                thang, lai, gocMoiThang, tong, soDu);
    }
}

int main(){
    int choice;
    do{
        printf("\nMenu chon chuc nang");
        printf("\nChuc nang 0: Thoat");
        printf("\nChuc nang 1: Kiem tra so nguyen");
        printf("\nChuc nang 2: Tim uoc so chung va boi so chung cua 2 so");
        printf("\nChuc nang 3: Tinh tien cho quan Karaoke");
        printf("\nChuc nang 4: Tinh tien dien");
        printf("\nChuc nang 5: Doi tien");
        printf("\nChuc nang 6: Tinh lai suat vay ngan hang vay tra gop");
        printf("\nChuc nang 7: Chuong trinh vay tien mua xe");
        printf("\nChuc nang 8: Sap xep thong tin sinh vien");
        printf("\nChuc nang 9: Game FPOLY-LOTT");
        printf("\nChuc nang 10: Tinh toan phan so");
        printf("\nBan hay chon chuc nang tu 0 den 10:");
        scanf("%d",&choice);
        switch(choice){
            case 0:
                printf("Hen gap lai");
                break;
            case 1:
                chucnang1();
                break;
            case 2:
                chucnang2();
                break;
            case 3:
                chucnang3();
                break;
            case 4:
                chucnang4();
                break;
            case 5:
                chucnang5();
                break;
            case 6:
                chucnang6();
                break;
            case 7:
            printf("Ban da chon chuc nang 7");
            break;
            case 8:
            printf("Ban da chon chuc nang 8");
            break;
            case 9:
            printf("Ban da chon chuc nang 9");
            break;
            case 10:
            printf("Ban da chon chuc nang 10");
            break;
            default:
            printf("Chuc nang ban chon khong co, ban vui long chon lai chuc nang");
        }
    }while(choice!=0);
    return 0;
}