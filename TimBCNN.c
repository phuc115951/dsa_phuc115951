#include <stdio.h>
int main() {
    int a, b;
    int i, max;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    if (a <= 0 || b <= 0) {
        printf("Vui long nhap 2 so nguyen duong!");
    }
    else {
        if (a > b)
            max = a;
        else
            max = b;
        i = max;
        while (i % a != 0 || i % b != 0) {
            i++;
        }
        printf("BCNN cua %d va %d la: %d", a, b, i);
    }
    return 0;
}
