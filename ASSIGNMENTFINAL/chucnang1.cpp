#include <iostream>
#include <stdio.h>
#include <stdlib.h>
// kiem tra so nguyen to , so chinh puong
void chucNang1(){
	int so ;
	printf("Nhap vao con so ngau nhien:");
	scanf("%d",&so);
	int lasont = 0;
		for(int i=2; i<so;i++){
			if(so%i==0){
				lasont =1;
			}
		}if(lasont==0){
			printf("%d la so nguyen to\n",so);
		}else{
			printf("%d khong phai la so nguyen to\n",so);
		}
	int scp= 0;
		for(int i=0;i<so;i++){
			if(i*i==so){
				scp=1;
			}
		}if(scp==0){
			printf("%d khong phai la so chinh phuong\n",so);
		}else{
			printf("%d la so chinh phuong\n",so);
		}
}


