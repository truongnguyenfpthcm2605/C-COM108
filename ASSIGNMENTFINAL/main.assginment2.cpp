#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/* nguyen van truong ps24083 It17312 com108
bai thuc hanh assginmnet FINAL
nagy tao: 30/11/2021;
*/

void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();
void chucNang6();
void chucNang7();
void chucNang8();
void chucNang9();
void chucNang10();
int main() {
	// menu chon lua
	MENU:
		system("cls");
	printf("++>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>+++++++\n");
	printf("********************WELCOME TO ASSGINMENT FINAL!************************************\n");
	printf("*\t1: Kiem Tra So Nguyen to, so chinh phuong:                                 *\n");
	printf("*\t2: Tim Uoc chung va Boi chung cua 2 so:                                    *");printf("************************************");
	printf("*\t3: Chuong trinh tinh tien cho quan Karaoke:                                *");printf("\tHo Va Ten: Nguyen Van Truong");
	printf("\n*\t4: Tinh tien dien:                                                         *");printf("\tMSSV: PS24083");
	printf("\n*\t5: Chuc nang doi tien:                                                     *");printf("\tGiang Vien: HO HI HONG NGA<3");
	printf("\n*\t6: Tinh lai xuat vay ngan hang tra gop:                                    *");printf("************************************");
	printf("\n*\t7: Xay dung chuong trinh vay tien mua xe:                                  *\n");
	printf("*\t8: Sap xep thong tin sinh vien:                                            *\n");
	printf("*\t9: Xay dung game FPOLY-LOTT(2/15):                                         *\n");
	printf("*\t10: Tinh tong, hieu,tich,thuong cua 2 phan so:                             *\n");
	printf("*\t11. Thoat chuong trinh:                                                    *\n");
	printf("++>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>+++++++\n");
	// chuong trinh chon chuc nang tuong ung
	int chon;

	do{
		printf("\tChon chuc nang 1-11: ");
		scanf("%d",&chon);
		printf("\tChuc nang ban chon la: %d\n",chon);
	}while(chon<0||chon>11);
	START:
		system("cls");
		
	switch(chon){
		case 1: 
		printf("\t++++++++++Chuc Nang 1+++++++++++\n");
		printf("\t1: Kiem Tra So Nguyen to, so chinh phuong:\n");
		chucNang1();
		break;
		case 2: 
		printf("\t++++++++++Chuc Nang 2+++++++++++\n");
		printf("\t2: Tim Uoc chung va Boi chung cua 2 so:\n");
		chucNang2();
		break;
		case 3: 
		printf("\t++++++++++Chuc Nang 3+++++++++++\n");
		printf("\t3: Chuong trinh tinh tien cho quan Karaoke:\n ");
		chucNang3();
		break;
		case 4: 
		printf("\t++++++++++Chuc Nang 4+++++++++++\n");
		printf("\t4: Tinh tien dien:\n ");
		chucNang4();
		break;
		case 5: 
		printf("\t++++++++++Chuc Nang 5+++++++++++\n");
		printf("\t5: Chuc nang doi tien:\n ");
		chucNang5();
		break;
		case 6: 
		printf("\t++++++++++Chuc Nang 6+++++++++++\n");
		printf("\t6: Tinh lai xuat vay ngan hang tra gop:\n");
		chucNang6();
		break;
		case 7: 
		printf("\t++++++++++Chuc Nang 7+++++++++++\n");
		printf("\t7: Xay dung chuong trinh vay tien mua xe:\n ");
		chucNang7();
		break;
		case 8: 
		printf("\t++++++++++Chuc Nang 8+++++++++++\n");
		printf("\t8: Sap xep thong tin sinh vien:\n ");
		chucNang8();
		break;
		case 9: 
		printf("\t++++++++++Chuc Nang 9+++++++++++\n");
		printf("\t9: Xay dung game FPOLY-LOTT(2/15):\n ");
		chucNang9();
		case 10: 
		printf("\t++++++++++Chuc Nang 10+++++++++++\n");
		printf("\t10: Tinh tong, hieu,tich,thuong cua 2 phan so \n ");
		chucNang10();
		break;
		case 11: printf(">>>>>>>>SEE YOU AGAIN ASSIGNMENT 2>>>>>>>>>>>>>\n");
		exit(0);
		}
	// chuong trinh thuc hien cac chuc nang menu tiep theo
	int lap;
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("\t1.Quay lai Menu chuong trinh\n");
	printf("\t2.Quay lai chuc nang vua thuc hien\n");
	printf("\t3.Thoat chuong trinh\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	do{
		printf("chon 1,2,3: ");
		scanf("%d",&lap);	
	}while(lap<0 || lap>3);
	switch(lap){
		case 1: goto MENU;
		case 2: goto START;
		case 3: printf("\t>>>>>>>>>>>>>>>SEE YOU AGAIN_ GOOD BYE YOU!>>>>>>>>>>>>>>\n");
		exit(0);
	}

	return 0;
}
