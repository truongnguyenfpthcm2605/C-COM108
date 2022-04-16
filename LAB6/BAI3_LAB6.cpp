#include <iostream>
#include <stdio.h>
#include <stdlib.h>
// sap xep mang theo thu tu giam dan va tang dan
void SXgiamDan(int arr[], int n){
	
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[i]){
				temp = arr[j];
				arr[j]=arr[i];
				arr[i]= temp;
				
			}
		}
	}
	
}
void SXtangDAN(int arr[], int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				temp = arr[j];
				arr[j]=arr[i];
				arr[i]= temp;
			}
		}
	}
}

