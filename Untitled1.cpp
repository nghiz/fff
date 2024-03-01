#include <stdio.h>

// H�m nh?p m?ng hai chi?u
void nhapMang2D(int a[][100], int m, int n) {
    printf("Nhap cac gia tri cua mang %dx%d:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap gia tri tai vi tri a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

// H�m xu?t m?ng hai chi?u
void xuatMang2D(int a[][100], int m, int n) {
    printf("Hien thi mang %dx%d:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", a[i][j]); // In gi� tr? v?i d? r?ng l� 5
        }
        printf("\n");
    }
}

int main() {
    int m, n;

    // Nh?p s? h�ng v� s? c?t c?a m?ng
    printf("Nhap so hang cua mang: ");
    scanf("%d", &m);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &n);

    int a[100][100];

    // G?i h�m nh?p m?ng
    nhapMang2D(a, m, n);

    // G?i h�m xu?t m?ng
    xuatMang2D(a, m, n);

    return 0;
}
