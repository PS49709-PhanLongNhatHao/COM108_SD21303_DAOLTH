#include <stdio.h>
#include <string.h>

int main(){
    int tuoi;
    char str1[20], str2[20];
    printf("Nhap tuoi:");
    scanf("%d", &tuoi);
    //fflush(stdin);
    getchar();// xoa khoang \n
    printf("Nhap chuoi 1: ");
    //scanf("%10s",str1);
    gets(str1);
    /*printf("Do dai cua chuoi 1: %d \n",strlen(str1));
    printf("\nNhap chuoi 2: ");
    gets(str2);
    printf("Do dai cua chuoi 2: %d\n",strlen(str2));
   /* if(strcmp(str1,str2) == 0){
        printf("Chuoi 1 bang chuoi 2");
    }else if(strcmp(str1,str2) > 0){
        printf("Chuoi 1 lon chuoi 2");
    }else{
        printf("Chuoi 1 nho hon chuoi 2");
    }*/
    printf("Xuat chuoi vua nhap: %s", str1);
    printf("Chuoi dao nguoc: %s",strrev(str1));
    return 0;
}