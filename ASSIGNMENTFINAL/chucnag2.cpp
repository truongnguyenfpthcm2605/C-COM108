#include <iostream>
#include <stdio.h>
#include <stdlib.h>
// tim uoc chung va boi chung cua 2 so
void chucNang2(){
	int a,b;

	printf("Nhap vao a: ");
	scanf("%d",&a);	
	printf("Nhap vao b: ");
	scanf("%d",&b);	
	int bcnn = a*b;
	if(a==0 && b==0){
		printf("khong co UCLN.BCNN\n");
	}else if(a==0 || b==0){//neu a hoac b =0 thi so con lai se la uoc chung vi no chia hets cho ca 2
		printf("khong co BCNN, UCLN = %d\n", a+b);	
	}else if(a!=0 && b!=0){
		while(a!=b){
			if(a>b){
				a=a-b;
			}else{
				b=b-a;
			}
		}printf("\nUCLN= %d\n",a);
		printf("\nBCNN= %d\n",bcnn/a);
	}
}
