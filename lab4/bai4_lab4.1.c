#include<stdio.h>
#include<stdlib.h>
void tinhTongTrungBinh();
void soNguyenTo();
void soChinhPhuong();
int main(){
int so;


		
	


	menu:
	system("CLS");
	do{
	
	printf("\t Xin moi chon Menu\n");
	printf("\t 1. Tinh trung binh tong cac so tu nhien chia het cho 2\n");
	printf("\t 2. Xay dung chuong trinh xac dinh o nguyen to\n");
	printf("\t 3. Xay dung chuong trinh xac dinh so chinh phuong\n");
	printf("\t 4. Thoat chuong trinh\n");
	printf("\t Moi ban chon chuc nang trong Menu\n");
	scanf("%d",&so);
	}while(so>4 || so<1);
	switch(so){
		case 1 : printf("Tinh trung binh tong cac so tu nhien chia het cho 2\n");
		tinhTongTrungBinh();
		break;
		case 2 : printf("Xay dung chuong trinh xac dinh so nguyen to\n");
		soNguyenTo();
		break;
		case 3 : printf("Xay dung chuong trinh xac dinh so chinh phuong\n");
		soChinhPhuong();
		break;
		case 4: printf("Chao tam biet\n");
		exit(0);
		
	}
	printf("Moi ban chon phim bat ki de tiep tuc\n");
	getch();
	goto menu;

	


	



return 0;
}
		


