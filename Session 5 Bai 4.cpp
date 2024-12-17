#include<stdio.h>

int main(){
	int a;
	printf("Nhap mot so tu 1 den 10: ");
	scanf("%d",&a);
	for (int i=1;i<=10;i++){
		printf("%d x %d = %d\n",a,i,a*i);
	}
}