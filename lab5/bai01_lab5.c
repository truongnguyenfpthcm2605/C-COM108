#include <stdio.h>
#include <stdlib.h>
//mssv: ps24083
// truongnv , ngay tao: 23/11/2021
// tim gia tri lon nhat cua 3 so
int GTLN(int a, int b, int c){
	int max = a;
	if(max<b) max =b;
	if(max<c) max =c;
	return max;
 	
}

