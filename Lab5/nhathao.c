#include<stdio.h>

//#Bai 1: Tìm số lớn nhất trong 3 số đã cho 
int max(int a,int b,int c){
    int max = a;
    if(b>max){
        max = b;
    }
    if(c>max){
        max = c;
    }
    return max;
}

//#Bài 2: Tính năm nhuận
int checkYear(int year){
    int flag=0;
    if(year % 400 == 0){
        flag = 1;
    }
    if(year % 4 == 0 && year % 100 != 0){
        flag = 1;
    }
    return flag;
}

//#Bài 3: Hàm hoán vị
void swap(int*a,int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    //Bài 1
    int a,b,c;
    printf("Chuong trinh tim gia tri lon nhat trong 3 so");
    printf("\nHay nhap so thu nhat:");
    scanf("%d",&a);
    printf("Hay nhap so thu hai:");
    scanf("%d",&b);
    printf("Hay nhap so thu ba:");
    scanf("%d",&c);
    printf("Gia tri lon nhat la:%d",max(a,b,c));
    //Bài 2
    int y;
    printf("\nChuong trinh tinh nam nhuan");
    printf("\nBan hay nhap nam:");
    scanf("%d",&y);
    int ck = checkYear(y);
    if(ck==1){
        printf("%d la nam nhuan");
    }else{
        printf("%d khong phai la nam nhuan");
    }
    //Bài 3
    int a1,b1;
    printf("\nChuong trinh hoan vi");
    printf("\nHay nhap gia tri a:");
    scanf("%d",&a1);
    printf("Hay nhap gia tri b:");
    scanf("%d",&b1);
    printf("Chua hoan vi %d - %d",a1,b1);
    swap(&a1,&b1);
    printf("\nDa hoan vi %d - %d",a1,b1);
    return 0;
}
