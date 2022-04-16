#include <iostream>
#include<stdio.h>
#include<string.h>
void diemNAPA(){
	char str[30];
	fflush(stdin); // giai phong bo diem truoc khi co gets
	printf("Nhap chuoi: ");
	gets(str);
	
	
	// cho demNA, diemPA dan hdau ==0, neu phat hien co NA or PA thi cong len de xet dieu kien
	//NULL == chuoi rong
	int i=0, demNA=0 , demPA=0;
	while(str[i]!=NULL){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
			demNA++;
			
		}else if(str[i]!= ' ')
			demPA++;	
		i++;
	}printf("chuoi \"%s\" NA la %d , PA la %d\n",str,demNA,demPA);
}
