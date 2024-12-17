#include<stdio.h>

int main(){
	int a,b,choice; // a va b la so de tinh
	do {
		printf("-----Caclulator-----\n");
		printf("1.Tong 2 so\n");
		printf("2.Hieu 2 so\n");
		printf("3.Tich 2 so\n");
		printf("4.Thuong 2 so\n");
		printf("5.Thoat\n");
		printf("Nhap so a: ");
		scanf("%d",&a);
		printf("Nhap so b: ");
		scanf("%d",&b);
		printf("Nhap phep tinh ban muon tim: ");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				printf("Tong 2 so la %d\n",a + b);
				break;
			case 2:
				printf("Hieu 2 so la %d\n",a - b);
				break;
			case 3:
				printf("Tich 2 so la %d\n",a * b);
				break;
			case 4:
				printf("Thuong 2 so la %d\n",a / b);
				break;			
		}
	}while(choice != 5);
	return 0;
}