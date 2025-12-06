#include <stdio.h>
// dn struct
struct SINHVIEN
{
    int MASV;
    char hoten[50];
    float diem;
};

int main(){
	struct SINHVIEN sv1;// goi dt sv1
	struct SINHVIEN sv2={2, "Viet", 10};
	struct SINHVIEN dssv[4]={
		{1, "Teo", 6}, 
		{2, "Ty", 8}, 
		{3, "Lionel", 7}, 
		{4, "CR7", 10}
	};
	struct SINHVIEN SD21303[38];
    // xuat sinh vien
    printf("MASV: %d",sv2.MASV);
    printf("\nHoten: %s",sv2.hoten);
    printf("\nDiem: %f", sv2.diem);
    return 0;
}

