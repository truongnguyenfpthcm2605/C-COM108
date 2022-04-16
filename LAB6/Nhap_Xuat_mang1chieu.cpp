#include <iostream>
#include <stdio.h>
#include <stdlib.h>
void nhapMang(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("Nhap vao gia tri trong arr[%d]",i);
		scanf("%d",&arr[i]);
	}
}
void xuatMang(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("Gia tri arr[%d] = %d\n",i,arr[i]);
		
	}
}
