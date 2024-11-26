#include <stdio.h>

int main () {
	int pass=134,in;
	
	printf("Nhap mat khau cua bn(3 so): ");
	scanf("%d", &in);
	
	while (pass!=in) {
		printf("Mat khau sai roi\n");	
		printf("Nhap lai mat khau:");
		scanf("%d", &in);
	}
	printf("Mat khau dung roi");
	return 0;
}
