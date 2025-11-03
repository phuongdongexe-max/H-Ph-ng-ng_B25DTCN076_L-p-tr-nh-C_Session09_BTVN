#include <stdio.h>
int main() {
    int n, arr[1000], i, j, change, count, freq = 0;
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
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                change = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = change;
            }
        }
    }
    i = 0;
    while (i < n) {
        count = 1;
        j = i + 1;
        while (j < n && arr[i] == arr[j]) {
            count++;
            j++;
        }
        if (count > freq) {
            freq = count;
        }
        i = j;
    }
    printf("Cac phan tu xuat hien nhieu nhat la: ");
    i = 0;
    while (i < n) {
        count = 1;
        j = i + 1;
        while (j < n && arr[i] == arr[j]) {
            count++;
            j++;
        }
        if (count == freq) {
            printf("%d ", arr[i]);
        }
        i = j;
    }
    printf("\n");
    return 0;
}
