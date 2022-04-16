#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
// chuc nan so 8
struct sinhVien1{
	char ten[30];
	float diem;
};
int n;
struct sinhVien1 sv[100];


void nhap();
void xuat();
void SXgiamDan();
void chucNang8(){

	printf("\nNhap vao so sinh vien trong danh sach: ");
	scanf("%d",&n);
	struct sinhVien1 sv[n];
	nhap();
	xuat();
	SXgiamDan();
	xuat();
	
}
void nhap(){

	printf(">>>>> NHAP VAO THONG TIN SINH VIEN>>>>>>>>>>\n");
	for(int i=0;i<n;i++){
		printf("\tSinh vien %d\n",i+1);
		printf("Nhap ten sinh vien: ");
		fflush(stdin);
		gets(sv[i].ten);
		printf("Nhap vao diem cua sinh vien: ");
		scanf("%f",&sv[i].diem);
		}
}
void SXgiamDan(){
	printf(">>>>>>>>>SAP XEP DIEM GIAM DAN >>>>>>>>>>>\n");
	struct sinhVien1 temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(sv[i].diem>sv[j].diem){
				temp=sv[i];
				sv[i]=sv[j];
				sv[j]=temp;
				
			}
		}
		
	}
}
void xuat(){

	printf(">>>>>>>>>XUAT DAN SACH SINH VIEN >>>>>>>>>>>\n");
	printf("%-10s %-20s %s\n","STT","TEN","DIEM");
	for(int i=0;i<n;i++){
		printf("%-10d %-20s %.2f\n",i+1,sv[i].ten,sv[i].diem);
	}
	
}
