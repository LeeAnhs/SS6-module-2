#include<stdio.h>
#include<math.h>

int main(){
	int counting= 0, num = 2;
	int n, i;
	printf ("Nhap 1 so nguyen n nat ky:\n"); 
	scanf("%d", &n);
	
	while(counting < n){
		int checking= 1;
		for(i = 2; i <= sqrt(num); i++){
			if(num % i == 0){
				checking = 0;
				break;
			}
		}
		if(checking == 1){
			printf("%d ", num);
			counting++;
		}
		num++;
	}
	return 0;
}
