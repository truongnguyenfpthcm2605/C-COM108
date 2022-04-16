#include <iostream>
#include<stdio.h>
#include<string.h>
	char userSys[]= "truong"; // khai bao chuoi
	char passSys[]="123";
void login(){
	char user[30];
	char pass[10];
	fflush(stdin); // xoa bo nho diem truoc khi gap gets
	printf("Nhap vao Username: ");
	gets(user);
	printf("Nhap vao password: ");
	scanf("%s",pass);
	// xuat chuoi
	printf("Username=%s \n",user);
	printf("Password=%s \n",pass);
	// so snah chuoi
	// so sanh chuoi sau voi chuoi truoc, neu == thi bang 0 , neu 1>2 thi >0, neu 1<2 thi <0
	int tk = strcmp(user,userSys); 
	int mk = strcmp(pass,passSys);
	if(tk==0 && mk==0){
		printf("Ban dang nhap thanh cong\n");
	}else{
		printf("Sai tai khoang hoac mat khau\n");
	}
}
