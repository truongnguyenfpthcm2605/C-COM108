#include <iostream>
#include<stdio.h>
#include<string.h>
// nguyen van truong 
// truongnv, ps24083
// ngay tao 2/12/2021
// lab7

void diemNAPA();
void login();
void SXchucai();
int main() {
	// khai bao bien de luu gia tri cua chuc nang duoc chon
	int chon;
	// xuat menu
	menu:
		system("cls");
	printf("\t Cac chuc nang cua lab7\n ");
	printf("\t1.Diem so nguyen am va phu am cua chuoi\n");
	printf("\t2.Dang nhap tai khoang va mat khau\n");
	printf("\t3.Sap xep chuoi theo chu cai\n");
	printf("\t4.Thoat chuong trinh\n");
	// gia tri cua chuc nang duoc chon va luu vao bien chon
	do{
	
	printf("\t Moi chon mot chuc nang muon thuc hien: ");
	scanf("%d",&chon);
	printf("\tChon 1,2,3,4\n");
	}while(chon<0 || chon > 4);
	// xu li de thuc hien menu tuong ung chuc nang lua chon phu hop
	START:
		system("cls");
	switch(chon){
		case 1: printf("\t1.Diem so nguyen am va phu am cua chuoi\n");
		diemNAPA();
		break;
		case 2: printf("\t2.Dang nhap tai khoang va mat khau\n");
		login();
		break;
		case 3: printf("\t3.Sap xep chuoi theo chu cai\n");
		SXchucai();
		break;
		case 4: 
		printf("\t4.Thoat chuong trinh\n");
		printf("\t SEE YOU AGIAN _ GOOD BOY\n");
		exit(0);
		
	}
	// xu li tiep sau khi thuc hien chuc nang
	system("pause"); // dung lai 1 nhip
	int tt;
	printf("\t Muon thuc hiien lai chuc nang dang chon , nhap phim 1\n");
	printf("\t Muon quay lai menu, nhan phim 2\n");
	printf("\t muon dung lai chuong trinh, nhan phim 0\n");
	do{
	
	printf("Lua chon 0,1,2 cua ban la: ");
	scanf("%d",&tt);
	
	}while(tt<0 || tt>2);// xu li thuc hien chuc nang
	if(tt==1) 	goto START;
	
	if(tt==2) 	goto menu;
	
	if(tt==0)   exit(0);


	return 0;
}
