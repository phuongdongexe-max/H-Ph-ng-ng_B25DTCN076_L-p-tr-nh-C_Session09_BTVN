#include <stdio.h>
int main() {
    int n, arr[1000], i, sum = 0;
    float average;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    if (n <= 0 || n > 1000) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("Nhap gia tri phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    average = (float)sum / n;
    printf("Gia tri trung binh cua %d phan tu la: %.2f\n", n, average);
    return 0;
}
