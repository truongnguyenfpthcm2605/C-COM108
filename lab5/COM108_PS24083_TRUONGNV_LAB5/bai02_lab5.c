#include <stdio.h>
#include <stdlib.h>
/* mssv: ps24083
truongnv
ngay tao: 23/11/2021
bai2: xay dung ham tinh nam nhuan*/
int namNhuan(int a){
	if(a%400==0 || (a%4==0 && a%100!=0)){
		printf("Nam %d la nam nhuan \n",a);}
	else{
	
	 printf("Nam %d khong phai nam nhuan\n",a);
	 }
	return a;
	
}

