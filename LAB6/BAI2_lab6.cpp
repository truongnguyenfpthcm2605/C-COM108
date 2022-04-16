#include <iostream>
#include <stdio.h>
#include <stdlib.h>
// tim gia tir lon nhat va nho nhat trong mang
void GTLNGTNN(int arr[], int n){
	int min,max;
	min=max=arr[0];
	for(int i=0;i<n;i++){
		if(min>arr[i]){
			min = arr[i];
		}if(max<arr[i]){
			max = arr[i];
		}
		
	}printf("Gia tri lon nhat la: %d,Gia tri nho nhat la: %d\n",max,min);
}
