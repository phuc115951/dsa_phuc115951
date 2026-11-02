#include <stdio.h>
int main() {
    int n, i;
    int a[100];
    int max;
    printf("Nhap so luong phan tu N: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("So lon nhat trong mang la: %d", max);
    return 0;
}
