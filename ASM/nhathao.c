#include<stdio.h>

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
            printf("Ban da chon chuc nang 1");
            break;
            case 2:
            printf("Ban da chon chuc nang 2");
            break;
            case 3:
            printf("Ban da chon chuc nang 3");
            break;
            case 4:
            printf("Ban da chon chuc nang 4");
            break;
            case 5:
            printf("Ban da chon chuc nang 5");
            break;
            case 6:
            printf("Ban da chon chuc nang 6");
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