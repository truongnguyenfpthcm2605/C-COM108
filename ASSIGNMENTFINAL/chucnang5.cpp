#include <iostream>
#include <stdio.h>
#include <stdlib.h>
// chuc nang doi tien
void chucNang5(){
		int soTien;
	do{
	printf("Nhap vao so tien VND\n"); scanf("%d",&soTien);
	printf("\nMenh gia tu 1-500\n");
	}while(soTien< 0 || soTien > 500);
	int menhGIa[9]={500,200,100,50,20,10,5,2,1};
	int soMenhGia[9]={0};
	int i=0;
	while(i<9){
		if(soTien>menhGIa[i]){
			break;
		}i++;
	}
	while(i<9 && soTien>0 ){
		soMenhGia[i]= soTien/menhGIa[i];
		soTien= soTien%menhGIa[i];
		i++;
		
	}
	printf("So tien nhan duoc lai la\n");
	int j;
	for( j=0;j<9;j++){
		if(soMenhGia[j]>0){
			printf("%d to %d\n",soMenhGia[j],menhGIa[j]);
		}
	}
}
