#include <iostream>
#include <stdio.h>
#include <stdlib.h>
// tinh tien dien
void chucNang4(){
	const float bac1 = 1678;
	const float bac2 = 1734;
	const float bac3 = 2014;
	const float bac4 = 2536;
	const float bac5 = 2834;
	const float bac6 = 2927;
	int sokWh;
	float tienDien;
	printf("Moi nhap so dien tieu thu hang thang: ");
	scanf("%d",&sokWh);
	printf("So dien tien thu hang thang cua ban la %d kWh\n",sokWh);
	if(sokWh <= 50){
		tienDien = sokWh*bac1;
	}else if(sokWh <= 100){
		tienDien = 50*bac1 + (sokWh - 50)*bac2;
	}else if(sokWh <= 200){
		tienDien = 50*bac1 + 50*bac2 + (sokWh - 100)*bac3;
	}else if(sokWh <= 300){
		tienDien = 50*bac1 + 50*bac2 + 100*bac3 + (sokWh - 200)*bac4;
	}else if(sokWh <= 400){
		tienDien = 50*bac1 + 50*bac2 + 100*bac3 + 100*bac4 + (sokWh - 300)*bac5;
	}else{
		tienDien = 50*bac1 + 50*bac2 + 100*bac3 + 100*bac4 + 100*bac5 + (sokWh - 400)*bac6;
	}
	printf("\nTong tien dien can phai dong: %.2fVND\n",tienDien);
}
