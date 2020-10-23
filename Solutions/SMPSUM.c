// https://www.spoj.com/problems/SMPSUM/
// SMPSUM - Iterated sums
// File Creation Date: 23-Oct-2020
// Author: WazeAzure(https://github.com/WazeAzure)

#include <stdio.h>

int main(void) {
	int a,b, sum=0;
	scanf("%d%d",&a,&b);
	
	for(int i=a;i<=b;i++){
		sum = sum + (i*i);
	}
	printf("%d",sum);
	return 0;
}
