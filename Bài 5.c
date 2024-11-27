#include <stdio.h>

int main () {
	int ngayn,ngayt,thang,nam;
	
	printf("Nhap thang: ");
	scanf("%d", &thang);
	printf("Nhap nam: ");
	scanf("%d", &nam);
	
	//kiem tra thang
	if(thang<1||thang>12) {
		printf("Thang khong hop le\n");
		return 1; 
	} 
	switch (thang) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			ngayt=31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			ngayt=30;
			break;
		case 2:
			if((nam % 4==0&&nam %100!=0)||(nam%400==0)) {
				ngayt=29; 
			}else{
				ngayt=28; 
			} 
			
			
    }
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        		ngayn = 366;
    		} else {
        		ngayn = 365;
			
	} 
	printf("Thang %d nam %d co %d ngay.\n", thang, nam, ngayt);
    printf("Nam %d co %d ngay.\n", nam, ngayn);

    return 0;
}

 
