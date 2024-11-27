#include <stdio.h>
#include <math.h>

int main() {
    //khai bao bien
    float a, b, c; 
    float delta, x1, x2;
    //nhap du lieu
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);
    //kiem tra a,b,b
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else {
            printf("Phuong trinh co 1 nghiem: x = %.2f\n", (-c / b));
        }
    } else {
        //tinh delta va in ra man hinh
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
        } else if (delta == 0) {
            x1 = -b / (2.0 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x1);
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    }

    return 0;
}
