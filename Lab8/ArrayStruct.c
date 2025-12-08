#include <stdio.h> 
#include <string.h>
struct sinhVien {
    int MaSV;
    char hoTen[50];
    float diem;
    char hocLuc[10];
};
void inputStructSinhVien(struct sinhVien x[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("Nhap MaSV[%d]: ", i); 
		scanf("%d", &x[i].MaSV);
        getchar();
		printf("Nhap ho ten[%d]: ", i); 
		scanf("%s", &x[i].hoTen);
		printf("Nhap diem[%d]: ",i); 
		scanf("%f", &x[i].diem);
	}
}
void printStructSinhVien(struct sinhVien x[], int n){
	int i;
	printf("MaSV  ");
	printf("Ho Ten  ");
	printf("Diem  ");
	printf(" Hoc luc\n");
	for(i=0; i<n; i++){
		printf("%4d  ", x[i].MaSV);
		printf("%6s  ", x[i].hoTen);
		printf("%4.1f  ", x[i].diem);
//		if(x[i].hocLuc!=NULL) 
		printf("%9s\n", x[i].hocLuc);
//		else printf(" \n");
	}
}
void xepLoaiStructSinhVien(struct sinhVien x[], int n){
	int i;
	for(i=0; i<n; i++){
		if(x[i].diem<5) 
			strcpy(x[i].hocLuc, "Yeu"); 
		else if(x[i].diem<6.5) 
				strcpy(x[i].hocLuc, "TB");
		else if(x[i].diem<8) 
			 	strcpy(x[i].hocLuc, "Kha");
		else if(x[i].diem<9) 
				strcpy(x[i].hocLuc, "Gioi");
		else 
			strcpy(x[i].hocLuc, "Xuat sac");
	}
}
void swapStructSinhVien(struct sinhVien *x, struct sinhVien *y){
	struct sinhVien temp; 
    temp=*x; 
    *x=*y; 
    *y=temp;
}
int main(){
	int i, j, slsv;
	struct sinhVien SD2130x[31];
	printf("Nhap so luong SV: "); scanf("%d",&slsv);
	inputStructSinhVien(SD2130x, slsv);
	printStructSinhVien(SD2130x, slsv);
	xepLoaiStructSinhVien(SD2130x, slsv);
	for(i=0; i<slsv-1; i++)//Sort DSSV giam dan theo Diem
		for(j=i+1; j<slsv; j++)
			if(SD2130x[i].diem < SD2130x[j].diem) 
				swapStructSinhVien(&SD2130x[i], &SD2130x[j]);
	printf("Danh sach SV sau khi sort:\n");
	printStructSinhVien(SD2130x, slsv);
	return 0;
}
