#include <stdio.h>
#include <stdlib.h>
int GTLN(int a, int b, int c);
int namNhuan(int a);
int hoanVi(int *a, int *b);
int main(){
	int so;
	menu:
		system("CLS");
		printf("\t Moi ban chon 3 chuc nang cua lab5\n");
		printf("\t 1.Tim gia tri lon nhat cua 3 so\n");
		printf("\t 2.Tinh nam nhuan\n");
		printf("\t 3.Hoan Vi \n");
		do{					
			printf("\t Moi ban chon 1,2,3: "); scanf("%d",&so);		
		}while(so < 1 || so > 3);
		LAP:
		system("CLS");
	switch(so){
		case 1 : printf("Chao mung ban den voi Tim gia tri lon nhat cua 3 so\n ");
			
				int a,b,c;
				printf("Nhap vao a,b,c\n"); scanf("%d%d%d",&a,&b,&c);
				printf("\nGia tri lon nhat cua %d,%d,%d la: %d",a,b,c,GTLN(a,b,c));
		break;
		case 2 : printf("Chao mung ban den voi Tinh nam nhuan\n");
				int nam;
				printf("Nhap vao nam: "); scanf("%d",&nam);
				namNhuan(nam);
		break;
		case 3 : printf("Chao Mung ban den voi Hoan Vi\n");
			
				int x,y;
				printf("Nhap vao x,y\n"); scanf("%d%d",&x,&y);
				printf(" x la: %d\n",x);
				printf(" y la: %d\n",y);
				hoanVi(&x,&y);
				printf(" x sau khi hoan vi la: %d\n",x);
				printf(" y sau khi hoan vi la: %d\n",y);		
		break;
	}
	int nhap;
	printf("\t\n1.Chay lai chuc nang vua thuc hien\n");
	printf("\t\n2.Quay lai menu\n");
	printf("\t\n3.Thoat chuong trinh\n");
	do{
		printf("Nhap chuc nang:"); scanf("%d",&nhap);
	}while(nhap<1 || nhap>3);
	switch(nhap){
		case 1: printf("Chay lai chuc nang vua thuc hien:\n");
		goto LAP;
		break;
		case 2:	goto menu;
		break;
		case 3: printf("Hen gap lai sau");
		exit(0);
		
			
	}

	return 0;
}
