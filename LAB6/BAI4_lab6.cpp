#include <iostream>
#include <stdio.h>
#include <stdlib.h>
// tinh binh phuong cac phan tu trogn mang 2 chieu
void BPmang2Chieu(){
	int x,y;
	printf("Nhap vao so hang trong mang: "); scanf("%d",&x);
	printf("Nhap vao so cot trong mang: "); scanf("%d",&y);
	int mang[x][y];
	// nhap mang
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			printf("Nhap gia tri trong mang[%d][%d] = ",i,j);
			scanf("%d",&mang[i][j]);
		}
	}
	// xuat mang
	printf("\t Xuat cac gia tri trong mang\n");
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			printf("\tmang[%d][%d]=%d",i,j,mang[i][j]);
		}printf("\n");
	}
	// xuat mang binh phuong
	printf("\tBinh phuong cac gia tri trong mang\n ");
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
		mang[i][j]=mang[i][j]*mang[i][j];
		printf("\tmang[%d][%d]=%d",i,j,mang[i][j]);
	}printf("\n");
}
}
