#include <stdio.h>

int main() {
    int a, b, uoclonnhat=1;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);
    if (a <= 0 || b <= 0) {
        printf("Nhap lai 2 so nguyen duong\n");
    } else {
        for ( int i = (a < b ? a : b); i >= 1; i--) {
            if (a % i == 0 && b % i == 0) {
                uoclonnhat = i; 
                break;    
            }
        }
        printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, (a * b)/uoclonnhat);
    }
    return 0;
}
