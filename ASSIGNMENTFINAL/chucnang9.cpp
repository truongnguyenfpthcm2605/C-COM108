#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// game fpt-loft (2-15)
void chucNang9(){
	int so;
	START:
	system("cls");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("++++++++++++++++++++++PLAYS GAME FPOLY-LOFT++++++++++++++++++++++++++\n");
	printf("RULES OF GAME\n");
	printf("1.So Quay ra ==2 ban trung giai nhat\n");
	printf("2.So quay ra ==1 ban trung giai nhi\n");
	printf("3.So quay ra ==0 Chuc ban may may lan sau\n");
	printf("4.so quay ra = so chon , trung giai Sieu Cap vippro\n");
	printf("5.So quay ra khac thi choi lai hoac thoat tro choi\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	
	do{
	printf("\t Nhap cac so trong khoang (1-15)\n");
	printf("\t Nhap vao so ban chon: ");
	scanf("%d",&so);
	}while(so<0 || so>15);
	printf("\tSo ban chon la : %d\n",so);
	int soNgauNhien = rand()%16; // so ngau nhien trong ham math
	printf("\tSo Quay ra la : %d\n",soNgauNhien);

	if(soNgauNhien==1){
		printf("Ban trung giai nhi\n");
		printf("Phan thuong: Nhan con Iphone 13pro max\n");
	}else if(soNgauNhien==2){
		printf("Ban trung giai nhat\n");
		printf("Phan thuon: Nhan chiec lamborghini\n");
	}else if(soNgauNhien==0){
		printf("Chuc ban may man lan sau\n");
		printf("Ban qua xui :))) Nghi choi di ba!\n");
	}else if(so==soNgauNhien){
		printf("Ban trung giai sieu cap vippro\n");
		printf("Phan Thuong: Ban se nhan duoc 1ty USD\n");
	}else{
		printf("Ban chon xui qua di!\n");
		int chon;
		printf("\t1.Choi lai dong 100k\n");
		printf("\t2.Thoat tro choi\n");
		do{
		printf("\tChon 1 va 2: ");
		scanf("%d",&chon);
		}while(chon<1 || chon >2);
		switch(chon){
			case 1: goto START;
			case 2: printf("SEE YOU AGIAN PLAYS GAME FPOLY-LOFT\n\tGOOD BYE!\n");
			break;
		}
	}
		
	}


