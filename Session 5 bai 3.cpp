#include <stdio.h>

int main(){
	int n,sum=0;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		sum += i;
	}
	printf("Tong cua so nguyen n la: %d",sum);
}