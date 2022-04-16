#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>

void soNguyenTo(){
	// nhap so nguyen x
	int x;
	printf("Moi nhap so can kiem tra la so nguyen to: ");
	scanf("%d",&x);
	// kiem tra so nguyen to
	int i =2;
	int lasont =1; // ngam hieu la so nguyen to
	
	while(i<x){
		if(x%i==0){
			lasont =0;
			break;
			
			
		}
		i++;
	}
	if(lasont==0)
		printf("%d khong phai la so nguyen to\n",x);
	else
		printf("%d phai la so nguyen to\n",x);
	
	
	
	
}

