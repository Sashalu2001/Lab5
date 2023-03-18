#include <stdio.h>
#include <stdlib.h>
#include "operat.h"

int main() {
    system("chcp 65001");

    short n;
    printf("Введите размерность матриц: ");
    scanf("%hd", &n);
    double **array1 = (double **)malloc(n * sizeof(double *));
    for (short i = 0; i < n; i++) {
        array1[i] = (double *)malloc(n * sizeof(double));
    }

    for (short i = 0; i < n; i++) {
        for (short j = 0; j < n ; j++) {
            printf("Введите элемент %hd строки %hd столбца :", i+1, j+1);
            scanf(" %lf", &array1[i][j]);
        }
    }

    double **array2 = (double **)malloc(n * sizeof(double *));
    for (short i = 0; i < n; i++) {
        array2[i] = (double *)malloc(n * sizeof(double));
    }

    for (short i = 0; i < n; i++) {
        for (short j = 0; j < n ; j++) {
            printf("Введите элемент %hd строки %hd столбца :", i+1, j+1);
            scanf(" %lf", &array2[i][j]);
        }
    }

    printf("\nПервая матрица %hd x %hd: \n", n, n);
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < n ; j++) {
            printf("%.2lf\t", array1[i][j]);
        }
        printf("\n");
    }
    printf("\nВторая матрица %hd x %hd: \n", n, n);
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < n ; j++) {
            printf("%.2lf\t", array2[i][j]);
        }
        printf("\n");
    }

    char sign = '0';
    while ((sign != '*') && (sign != '+') && (sign != '-')) {
        printf("Введите необходимую операцию :");
        scanf("%c", &sign);
    }
    printf("%c", sign);

    double **array = (double **)malloc(n * sizeof(double *));
    for (short i = 0; i < n; i++) {
        array[i] = (double *)malloc(n * sizeof(double));
    }
    operations(array1, array2, array, sign, n);
    printf("\nИтоговая матрица %hd x %hd: \n", n, n);
    for (short i = 0; i < n; i++) {
        for (short j = 0; j < n ; j++) {
            printf("%.2lf\t", array[i][j]);
        }
        printf("\n");
    }

    for (short i = 0; i < n; i++) free(array1[i]);
    free(array1);
    for (short i = 0; i < n; i++) free(array2[i]);
    free(array2);
    for (short i = 0; i < n; i++) free(array[i]);
    free(array);
}

