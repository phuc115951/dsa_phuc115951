#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,delta;
	float x1,x2;
	printf("Nhap a: ");
	scanf("%f",&a);	
	printf("Nhap b: ");
	scanf("%f",&b);
	printf("Nhap c: ");
	scanf("%f",&c);
	if(a == 0){
		printf("Khong phai pt bac 2");
		if(b == 0){
			if(c == 0){
				printf("\nPhuong trinh vo so nghiem");
			}
			else{
				printf("\nPhuong trinh vo nghiem");
			}
		}
		else{
			printf("\nPhuong trinh co nghiem x = %.2f",-c/b);
		}
	}
	else{
		delta = b * b - 4 * a * c;
		if(delta < 0){
			printf("PT vo nghiem");
		}
		else if(delta == 0){
			x1 = -b/(2 * a);
			printf("PT co nghiem kep: x = %.2f",x1);
		}
		else{
			x1 = (-b+sqrt(delta))/(2 * a);
			x2 = (-b-sqrt(delta))/(2 * a);
			printf("PT co 2 nghiem PB: %.2f %.2f",x1,x2);
		}
	}
	return 0;		
}
