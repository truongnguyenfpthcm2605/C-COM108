#include <iostream>
#include <stdio.h>
#include <stdlib.h>
// xay dung chuong trinh tinh tien mua xe tra gop trong 12 thang
void chucNang6(){
	int soTien;
	do{
	
	printf("Nhap vao so tien vay:"); scanf("%d",&soTien);
	}while(soTien<0);
	printf("So tien vay la %dVND\n",soTien);
	
	int kyhan = 12;
	float soTienGoc =  soTien/kyhan;
	printf("%-10s %-20s %-20s %-20s %s\n","Ky Han(THANG)","Lai thang(VND)","Goc phai tra(VND)","Tong phai tra(VND)","con lai(VND)");
	for(int i=1;i<=kyhan;i++){
		float laiThang = soTien*0.05;
		float soTienPhaiTra = soTienGoc+laiThang;
		 soTien=soTien-soTienGoc;
	printf("THANG %-10d %-20.2f %-20.2f %-20.2f %d\n",i,laiThang,soTienGoc,soTienPhaiTra,soTien);


	
		
	}
}
