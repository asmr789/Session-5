#include <stdio.h>

int main() {
    int a = 2; 
    int b;         
    do {
        printf("Nhap mot so nguyen(1 - 10): ");
        scanf("%d",&b);
        if (b != a) {
            printf("Nhap sai roi thu lai \n");
        }
    } while (b != a); 
    printf("Chuc mung nhap dung roi %d\n", b);
    return 0;
}