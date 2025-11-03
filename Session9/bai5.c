#include <stdio.h>
int main() {
    int n, arr[1000], i, even = 0, odd = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0 || n > 1000) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Cac so chan trong mang la: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            even++;
        }
    }
    printf("\n");
    printf("Cac so le trong mang la: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
            odd++;
        }
    }
    printf("\n");
    printf("Tong so chan = %d\n", even);
    printf("Tong so le = %d\n", odd);
    return 0;
}
