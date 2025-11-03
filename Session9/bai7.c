#include <stdio.h>
int main() {
    int n, arr[1000], i, j, reverse;
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
    i = 0;
    j = n - 1;
    while (i < j) {
        reverse = arr[i];
        arr[i] = arr[j];
        arr[j] = reverse;
        i++;
        j--;
    }
    printf("Mang sau khi dao nguoc: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
