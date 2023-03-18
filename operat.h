#ifndef LAB5_OPERAT_H
#define LAB5_OPERAT_H

#endif //LAB5_OPERAT_H

double operations(double **array1, double **array2, double **array, char operation, short n) {

    switch (operation) {
        case '+': {
            for (short i = 0; i < n; i++) {
                for (short j = 0; j < n; j++) {
                    array[i][j] = array1[i][j] + array2[i][j];
                }
            }
            return **array;
            break;
        }
        case '-': {
            for (short i = 0; i < n; i++) {
                for (short j = 0; j < n; j++) {
                    array[i][j] = array1[i][j] - array2[i][j];
                }
            }
            return **array;
            break;
        }
        case '*': {
            for (short i = 0; i < n; i++) {
                for (short j = 0; j < n ; j++) {
                    array[i][j] = 0;
                    for (short k = 0; k < n; k++) {
                        array[i][j] += array1[i][k] * array2[k][j];
                    }
                }

            }
            return **array;
            break;
        }
    }
}