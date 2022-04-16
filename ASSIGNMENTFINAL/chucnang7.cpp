#include <iostream>
#include <stdio.h>
#include <stdlib.h>
// chuong trinh vay tien mua xe
void chucNang7(){
	float PTTT;
	do{
	
	printf("Nhap vao phan tram tra truoc: ");
	scanf("%f",&PTTT);
	// gia dinh so nhap vao la so phan tram vd 10%==0.1, ....01-0.99
	printf("nhap phan tram voi dang phan so (0.1-0.9)\n");
	}while(PTTT<0 || PTTT>1);
	// so phan tram con lai tuong duong 100% tru so phan tram tra truoc
	float SoPTconlai = 1.0-PTTT;// 1.0 tuong duong 100% tru di so % tra truoc vd: 100-50=50% (tuong tu so tien con lai phai tra la 50% tong so tien)
	float soTienVay = 500000000;// de cho, con khong phai nhap vao tu ban phim
	float laiThang = 0.072/12; // de cho san lai 1 namw 7.2% va chia ra 12 de lay lai moi thang
	// so tien con phai tra == so tien goc* so phan tram con lai
	float money = soTienVay*SoPTconlai;
	printf("So tien con phai tra là: %.2fVND\n",money);
	int kyhan =12;
	float gocPhaitra = money/kyhan;
	printf("\n%-10s %-20% %-20s %-20s %-20s %s\n","Ky han","lai thang","Goc phai tra","tong phai tra","Con lai");
	for(int i=1;i<=kyhan;i++){
		float laiMoiThang = money*laiThang;
		float tongPhaiTra = gocPhaitra+laiMoiThang;
		money = money-gocPhaitra;
		printf("Thang %-10d %-20.2f %-20.2f %-20.2f %.2f\n",i,laiMoiThang,gocPhaitra,tongPhaiTra,money);
	}


	
	
}
