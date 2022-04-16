#include <iostream>
#include <stdio.h>
#include <stdlib.h>
// tinnh tien karaoke hoat dong tu 12-23 gio
// so gio >3 giAM 30%
// SO Gio t?ng khoang 14-17 thi giam tiep 10% tong thanh toán
void chucNang3(){
	int gbd,gkt;
	do{
	
	printf("Nhap vao gio bat dau: "); scanf("%d",&gbd);
	printf("Nhap vao gio ket thuc: "); scanf("%d",&gkt);
	printf("trong khoang (12h-23h)\n");
	}while(gbd<12 || gkt>23 || gkt<gbd);
	int giachuan =150000;
	int gioTong =gkt-gbd;
	printf("\t Tong so gio karaoke la: %d\n",gioTong);
	int km3gio = (gioTong-3)*giachuan*0.3;
	int kmGioVang = gioTong*giachuan*0.1;
	int tienKaraoke = gioTong*giachuan;
	
	if(gioTong>3){
		printf("\t So gio vuot la %d\n:", gioTong-3);
		printf("\t So tien ban dau là: %d\n",tienKaraoke);
		printf("\t So tien khuyen mai vuot 3 gio hat la:%d\n",km3gio);
		printf("\t so tien karaoke phai tra sau khi khuyen mai la: %d\n",tienKaraoke-km3gio);
	}else{
		printf("\tSo tien karaoke la: %d\n",tienKaraoke);
	}
	if(gbd>=14 && gkt<=17){
		printf("\tKhung gio khuyen mai(14-17h)\n");
		printf("\tSo tien karaoke la: %d\n",tienKaraoke);
		printf("\tSo tien khuyen mai 10 pham tram la : %d\n",kmGioVang);
		printf("\tSo tien phai tra sau khi tru khuyen mai la: %d\n",tienKaraoke-kmGioVang);
	}
}
