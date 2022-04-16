#include <iostream>
#include<stdio.h>
#include<string.h>
void nhapDS();
void xuatDS();
void SXDStang();
void SXDSgiam();
char s[5][30]; // dat kieu chuoi sai cho all ham
// khai bao tat ca vo 1 ham roi khai bao qua main
void SXchucai(){
	nhapDS();
	SXDStang();
	xuatDS();
	SXDSgiam();
	xuatDS();
	
}
// nhap nhieu chuoi tuong tu nhap mang 1 chieu
void nhapDS(){
	printf("Nhap danh sach 5 chuoi");
	fflush(stdin); // xoa bo nho diem truoc khi dung gets
	for(int i = 0;i<5;i++){
		printf("\nChuoi thu %d: ",i+1);
		gets(s[i]);
	}
	
	

}
// xuats nhu mang 1 chieu 
void xuatDS(){
	printf("\n 5 chuoi co trong danh sach\n");
	for(int i =0;i<5;i++){
		printf("\t");
		puts(s[i]);
	}
	
}
// so sanh chuoi roif hoan vi chuoi bang cac ham cua chuoi strcmp,strcpy
void SXDStang(){
	char temp[30];
	printf("+++++++++++ Sap xep tang dan++++++++++++++\n");
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			if(strcmp(s[i],s[j])>0){
				strcpy(temp,s[i]) ;
				strcpy(s[i],s[j]) ;
				strcpy(s[j],temp) ;
				
				
			}
		}
	}
	
}
// so sanh chuoi roif hoan vi chuoi bang cac ham cua chuoi strcmp,strcpy
void SXDSgiam(){
	char diem[30];
	printf("+++++++++++ Sap xep giam dan++++++++++++++\n");
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(strcmp(s[i],s[j])<0){
				strcpy(diem,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],diem);
				
			}
		}
	}
}
