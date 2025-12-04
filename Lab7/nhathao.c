#include<stdio.h>
#include<string.h>

int main(){
    //#Bài 1:XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
    char s1[100];
    printf("Xin moi nhap vao chuoi:");
    gets(s1);
    int i = 0,n = 0,p = 0;
    while(s1[i++]!='\0'){
        if(s1[i]=='a'||s1[i]=='i'||s1[i]=='e'||s1[i]=='u'||s1[i]=='o'){
            n++;
        }else{
            p++;
        }
    }
    printf("Chuoi %s co chua: %d nguyen am va %d phu am.",s1,n,p);
    //#Bài 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD
    char userSys[] = "admin";
    int passSys = 12345;
    char user[100];
    int pass;
    printf("\nHay nhap vao username:");
    gets(user);
    printf("Hay nhap vao password:");
    scanf("%d",&pass);
    if(strcmp(userSys,user)==0 && pass == passSys){
        printf("Dang nhap thanh cong");
    }else{
        printf("Dang nhap that bai");
    }
    //#Bài 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI
    char s[5][20];
    char temp[20];
    for(int i=0;i<5;i++){
        printf("\nHay nhap chuoi thu %d:",i+1);
        gets(s[i]);
        s[i][strcspn(s[i], "\n")] = '\0';
    }
    for(int i=0;i<5;i++){
        for(int j=1;j<5;j++){
            if(strcmp(s[j-1],s[j])>0){
                strcpy(temp,s[j-1]);
                strcpy(s[j-1],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("\nCac chuoi sau khi sap xep: %s",s[i]);
    }
    //#Bài 4: Cho chuỗi bất kì
    char c[50];
    int cnt[100]={0};
    printf("\nHay nhap chuoi ky tu:");
    gets(c);
    for(int i=0;i<strlen(c);i++){
        cnt[c[i]]++;
    }
    int res = 0;
    char kt;
    for(int i=0;i<100;i++){
        if(cnt[i]){
            if(cnt[i]>res){
                res = cnt[i];
                kt = (char)(i);
            }
        }
    }
    printf("Ky tu xuat hien nhieu hon 2 lan la: %c",kt);
    return 0;
}