#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int min,max;
	int tong=0;
	int diem =0;
	int tbinh;
	do{
	
	printf("Nhap so min: "); scanf("%d",&min);
	printf("Nhap so max: "); scanf("%d",&max);}
	while(min>max);
	
	// tinh min<=max
	int i=min;
	while(i<=max){
		if(i%2==0){
			tong+=i;
			diem++;
			
		}
		i++;
	}if(diem==0){
		printf("khong co so nao chia het cho 2");
	}else{
		tbinh = tong/diem;
		printf("TB tong cac so chia het cho 2 tu %d den %d la %d",min,max,tbinh);
	}
	
	return 0;
}
