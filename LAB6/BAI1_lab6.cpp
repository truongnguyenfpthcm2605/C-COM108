#include <iostream>
#include <stdio.h>
#include <stdlib.h>
// tinnh trung binh tong cac so chia het cho 3 torng mang
void TBCHetCho3(int arr[], int n){
	int diem=0;
	int tong=0;
	for(int i=0;i<n;i++){
		if(arr[i]%3==0){
			tong+=arr[i];
			diem++;
		}
	}if(diem==0){
		printf("Khong co gia tri nao trong mang chia het cho 3\n");
	}else{
		printf("\nco %d phan tu chia het cho 3, Trung binh cong = %.2f\n",diem,(float)tong/diem);
	}
}

