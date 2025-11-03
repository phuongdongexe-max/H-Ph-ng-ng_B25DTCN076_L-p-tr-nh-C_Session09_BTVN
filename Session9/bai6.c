#include <stdio.h>
int main() {
    int n, arr[1000], i, x, find = 0;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    if (n <= 0 || n > 1000) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap mot gia tri can tim x: ");
    scanf("%d", &x);
    printf("So %d xuat hien vi tri: ", x);
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("%d ", i + 1);
            find = 1;
        }
    }
    if (find == 0) {
        printf("Khong tim thay %d trong mang.", x);
    }
    printf("\n");
    return 0;
}
