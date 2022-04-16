#include <stdio.h>
#include <iostream>
#include <stdlib.h>
// tinh tong, hieu, tich, thuong cua 2 phan so
// khai bao 1 cau truc du lieu
struct phanso{
	int tuSo;
	int mauSo;
};
void chucNang10(){
	// goi ten cau truc
	struct phanso so1,so2,tong,hieu,tich,thuong;
	// nhap vao tu so va mau so thu 1
	printf("Nhap vao Tu so thu 1 : ");
	scanf("%d",&so1.tuSo);
	printf("Nhap vao Mau so thu 1: ");
	scanf("%d",&so1.mauSo);
	// nhap vao tu so va mau so thu 2
	printf("Nhap vao Tu so thu 2 : ");
	scanf("%d",&so2.tuSo);
	printf("Nhap vao Mau so thu 2: ");
	scanf("%d",&so2.mauSo);
	// xuat ra 2 phan so
	printf("Phan so thu 1 = %d/%d\nPhan so thu 2 = %d/%d\n",so1.tuSo,so1.mauSo,so2.tuSo,so2.mauSo);
	// tinh tonh hieu tich thuong cua 2 phan so
	// tong
	tong.tuSo =so1.tuSo*so2.mauSo+so1.mauSo*so2.tuSo;
	tong.mauSo=so1.mauSo*so2.mauSo;
	printf("Tong cua 2 phan so la: %d/%d \n",tong.tuSo,tong.mauSo);
	// hieu
	hieu.tuSo=so1.tuSo*so2.mauSo-so1.mauSo*so2.tuSo;
	hieu.mauSo=so1.mauSo*so2.mauSo;
	printf("hieu cua 2 phan so la: %d/%d \n",hieu.tuSo,hieu.mauSo);
	// tich
	tich.tuSo=so1.tuSo*so2.tuSo;
	tich.mauSo=so1.mauSo*so2.mauSo;
	printf("tich cua 2 phan so la : %d/%d \n",tich.tuSo,tich.mauSo);
	// thuong
	hieu.tuSo=so1.tuSo*so2.mauSo;
	hieu.mauSo=so1.mauSo*so2.tuSo;
	printf("hieu cua 2 phan so la: %d/%d \n",hieu.tuSo,hieu.mauSo);
	
}
