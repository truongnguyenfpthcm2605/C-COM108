#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// dinh nghia cau truucsinh vien
struct sinhVien{
	char mssv[30];
	char ten[30];
	char nganh[30];
	float diemTB;
	
}sv[40];
struct sinhVien sv1;
int n;


void	nhapSV();
void	xuatSV();
void	nhapDSSV();
void	xuatDSSV();
void	SXTheoDiemTang();
void 	SXTheoDiemGiam();
void	timTheoMaSV();
void  	SXsinhVienTheoNganh();
int main() {
	int chon;
	menu:
		system("cls");
	printf("\tChon chuc nang thuc hien\n");
	printf("\t1.Nhap xuat thong tin 1 sinh vien\n");
	printf("\t2.Thoat chuc nang nay\n");
	scanf("%d",&chon);
	if(chon==1){
		printf("Nhap xuat thong tinh sinh vien\n");
		nhapSV();
		xuatSV();
		printf(">>>>>>>>>>Thuc hien chuc nang tiep theo bam enter>>>>>\n");
		system("pause");
	}else if(chon==2){
		printf("SEE YOU AGIAN\n");
		printf(">>>>>>>>Thuc hien chuc nang tiep theo bam enter>>>>>\n");
		system("pause");
	}else{
		printf("Nhap sai so(1,2)\n");
		goto menu;
	}
	printf("\n\t>>>>>>>>> Chao mung ban den voi danh sach sinh vien>>>>>>>>>>>\n");
	printf("Nhap so luong sinh vien se them vao danh sach: ");
	scanf("%d",&n);
	nhapDSSV();
	xuatDSSV();
	ss:
	printf("\t1.Sap xep diem tang va giam theo danh sach sinh vien\n");
	printf("\t2.Tim theo ms sinh vien\n");
	printf("\t3.Diem cac sinh vien theo nganh UDPM\n");
	printf("\t4.Thoat chuong trinh\n");
	int lap;
	do{
		printf("Chon 1,2,3,4: ");
		scanf("%d",&lap);
	}while(lap<0 || lap>4);
	start:
		system("cls");
	switch(lap){
		case 1:
		printf("\t1.Sap xep diem tang va giam theo danh sach sinh vien\n");
		SXTheoDiemTang();
		xuatDSSV();
		SXTheoDiemGiam();
		xuatDSSV();
		break;
		case 2: 
		printf("\t2.Tim theo ms sinh vien\n");
		timTheoMaSV();
		break;
		case 3: 
		printf("\t3.Diem cac sinh vien theo nganh UDPM\n");
		SXsinhVienTheoNganh();
		break;
		case 4: 
		printf("SEE YOU AGIN_ GOOD BYE\n");
		exit(0);
	}

	int tt;
	printf("Thuc hien cac chuc nang sao\n");
	printf("\t1.Tiep tuc chuong trinh vua thuc hien: \n");
	printf("\t2.thuc hien lai menu: \n");
	printf("\t3.thoat chuong trinh: \n");
	printf("Chon 1,2,3: ");
	scanf("%d",&tt);
	if(tt==1) goto start;
	if(tt==2) goto ss;
	if(tt==3){
		printf("SEE YOU AGIN_ GOOD BYE\n");
		exit(0);
	}else printf("chon sai roi\n HE THONG DA BI VIRUS \n"); exit(0);
		

	return 0;
}
void nhapSV(){
	printf("\n THONG TIN SINH VIEN \n");
	printf("\n MASSV : ");
	fflush(stdin);
	gets(sv1.mssv);
	printf("\n Ten SV: ");
	fflush(stdin);
	gets(sv1.ten);
	printf("\n Nganh : ");
	fflush(stdin);
	gets(sv1.nganh);
	printf("\n Diem: ");
	scanf("%f",&sv1.diemTB);
	
}
void xuatSV(){
	printf("\n THONG TIN SINH VIEN \n");
	printf("\n %-20s %-20s %-20s %.2f\n","MSSV","TEN","NGANH","DIEM TB");
	printf("\n %-20s %-20s %-20s %.2f\n",sv1.mssv,sv1.ten,sv1.nganh,sv1.diemTB);

	
}
void nhapDSSV(){
	printf("\n>>>>>THONG TIN SINH VIEN VAO DS>>>>>\n");
	for(int i=0;i<n;i++){
		printf("\nSinh vien %d", i+1);
		printf("\n MSSV: ");
		fflush(stdin);
		gets(sv[i].mssv);
		printf("\n Ten SV: ");
		fflush(stdin);
		gets(sv[i].ten);
		printf("\n Nganh: ");
		fflush(stdin);
		gets(sv[i].nganh);
		printf("\n Diem: ");
		scanf("%f",&sv[i].diemTB);
	
	}
}
void xuatDSSV(){
	printf("\t\n>>>>> XUAT THONG TIN SINH VIEN TRONG DS>>>>>\n");
	printf("%-10s %-20s %-20s %-20s %s\n","stt","mssv","ten","nganh","diem");
	for(int i=0;i<n;i++){
		printf("%-10d %-20s %-20s %-20s %.2f\n",i+1,sv[i].mssv,sv[i].ten,sv[i].nganh,sv[i].diemTB);
	}
	
}
void SXTheoDiemTang(){
	printf(">>>>> SAP XEM DIEM TANG>>>>>>>>\n");
	struct sinhVien temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(sv[i].diemTB>sv[j].diemTB){
				temp=sv[i];
				sv[i]=sv[j];
				sv[j]=temp;
				
			}
		}
		
	}
	

}
void SXTheoDiemGiam(){
	printf(">>>>> SAP XEM DIEM GiAM>>>>>>>>\n");
	struct sinhVien temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(sv[i].diemTB<sv[j].diemTB){
				temp=sv[i];
				sv[i]=sv[j];
				sv[j]=temp;
				
			}
		}
		
	}
	
}
void timTheoMaSV(){
	char msv[30];
	printf("\nNhap ma sinh muon tim: ");
	fflush(stdin);
	gets(msv);
	int j= -1;
	for(int i=0;i<n;i++){
		if(strcmp(msv,sv[i].mssv)==0){
			j=i;
			break;
			
		}
	}if(j<0){
		printf("Khong tim thay \"%s\" trong MSSV trong danh sach\n",msv);
	}else{
		printf(" TIM THAY \"%s\" Trong \n",msv);
		printf(" %-20s %-20s %-20s %.2f\n",sv[j].mssv,sv[j].ten,sv[j].nganh,sv[j].diemTB);
		
		
	}
	
	
}
void SXsinhVienTheoNganh(){
	char s[]="UDPM";
	int diem=0;
	int j;
	for(int i=0;i<n;i++){
		if(strcmp(s,sv[i].nganh)==0){
			j=i;
			diem++;

		}
		
	}if(diem==0){
		printf("Khong co sinh vien nao hoc \"%s\" trong danh sach\n",s);
		
	}else{
		printf("co %d sinh vien hoc trong danh sach nganh \"%s\"\n",diem,s);
		printf("voi cac sinh vien la\n");
		printf(" %-20s %-20s %-20s %.2f\n",sv[j].mssv,sv[j].ten,sv[j].nganh,sv[j].diemTB);
	}
}

