#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// viet chuong trinh ket luan so x co phai la so chinh phuong hay khong
void soChinhPhuong(){
	int i,x;
	int diem=0;
	printf("Nhap vao so x:"); scanf("%d",&x);
	for(i=1;i<x;i++){
		if(i*i==x){
			printf("%d la so chinh phuong\n",x);
			diem++;
			break;
			
		}
			
		
	}if(diem==0){
		printf("%d khong phai la so chinh phuong\n",x);
		
		
	}

	

	
}

