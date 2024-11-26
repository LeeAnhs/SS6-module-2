#include <stdio.h>

int main () {
	int a,b,c,d,e,sochan=0,sole=0;
	
	printf("Nhap vao 5 so nguyen: ");
	scanf("%d %d %d %d %d: ",&a,&b,&c,&d,&e);
	
	if (a % 2==0){
		sochan += 1;
	} else {
		sole +=1;
	}
		if (b % 2==0){
		sochan += 1;
	} else {
		sole +=1;
	}
		if (c % 2==0){
		sochan += 1;
	} else {
		sole +=1;
	}
		if (d % 2==0){
		sochan += 1;
	} else {
		sole +=1;
	}
		if (e % 2==0){
		sochan += 1;
	} else {
		sole +=1;
	}
	printf("Co %d so chan \n", sochan);
	printf("Co %d so le \n", sole);
	return 0;
}
