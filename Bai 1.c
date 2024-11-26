#include <stdio.h>

int main () {
	int a,b,c,d,e;
	
	
	printf("Nhap vao 5 so nguyen:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	if (a % 2 ==0) {
		a=0;
	}
	if (b % 2 ==0) {
		b=0;
	}
	if (c % 2 ==0) {
		c=0;
	}
	if ( d % 2 == 0) {
		d=0;
	}
	if ( e % 2 == 0 ) {
		e=0;
	}
	int sum;
	sum=a+b+c+d+e;
	printf("Tong cac so le la: %d\n", sum);
	
	return 0;
}
