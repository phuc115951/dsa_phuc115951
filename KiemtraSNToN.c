#include <stdio.h>
int main() {
    int n, i;
    int dem = 0;
    printf("Nhap so nguyen duong N: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("N khong phai so nguyen duong!");
    }
    else {
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                dem++;
            }
        }
        if (dem == 2) {
            printf("%d la so nguyen to", n);
        }
        else {
            printf("%d khong phai la so nguyen to", n);
        }
    }
    return 0;
}
