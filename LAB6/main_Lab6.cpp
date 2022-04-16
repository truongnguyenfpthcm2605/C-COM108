#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/* Nguyen van truong ps24083
bai lam thuc hanh lab6
ngay lam 27.11.2021
*/
void nhapMang(int arr[], int n);
void xuatMang(int arr[], int n);
void TBCHetCho3(int arr[], int n);
void GTLNGTNN(int arr[], int n);
void SXgiamDan(int arr[], int n);
void SXtangDAN(int arr[], int n);
void BPmang2Chieu();
int main() {
		int n ;
	menu:
	system("CLS");
	printf("Nhap so phan tu mang ");
	scanf("%d",&n);
	int arr[n];
	nhapMang(arr,n);
	xuatMang(arr,n);
	printf("++..........................................................++\n");
	printf("\tChon chuc nang trong lab 6\n");
	printf("\t1.Trung binh tong cac so chia het cho 3 trong mang\n");
	printf("\t2.GTLN VA GTNN trong mang\n");
	printf("\t3.Sap xep mang theo thu tu giam dan va tang dan\n");
	printf("\t4.Binh Phuong mang 2 chieu\n");
	printf("\t5.Thoat chuong trinh\n");
	printf("++..........................................................++\n");
	int chon;
	do{
		printf("\tChon 1->5 chuc nang: "); scanf("%d",&chon);
	}while(chon<0 || chon>5);
	START:
		system("cls");
	switch(chon){
		case 1: printf("\tChao Mung ban den voi chuc nang so 1\n");
		TBCHetCho3(arr,n);
		break;
		case 2: printf("\tChao mung ban den voi chuc nag so 2\n");
		GTLNGTNN(arr,n);
		break;
		case 3: printf("\tChao mung ban den voi chuc nang so 3\n");
		printf("\tSap xep giam dan\n");
		SXgiamDan(arr,n);
		xuatMang(arr,n);
		printf("\tSap xep tang dan\n");
		SXtangDAN(arr,n);
		xuatMang(arr,n);
		break;
		case 4: printf("\tChao mugn ban den voi chuc nag so 4\n");
		BPmang2Chieu();
		break;
		case 5: printf("\tHen gap lai sau\n");
		exit(0);
	}
	int lapLai;
	printf("\n++>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>++\n");
	printf("\t1.Lap lai menu chuong trinh\n");
	printf("\t2.Thoat chuong trinh\n");
	printf("++>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>++\n");
	printf("\tChon 1 hoac 2 : "); scanf("%d",&lapLai);

	switch(lapLai){
		case 1 : goto menu;

		case 2 : printf("See you again\n");
		exit(0);
		default : printf("Chon 1 ,2  thoi ban oi\n");
		exit(0);
		
	}
	return 0;

}
