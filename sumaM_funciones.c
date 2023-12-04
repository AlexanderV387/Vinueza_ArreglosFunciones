#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para generar una matriz
void generarMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101;
        }
    }
}

// Función para imprimir una matriz
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

// Función para sumar dos matrices
void sumarMatrices(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas], int matrizSuma[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizSuma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

int main() {
    int n, m;

    printf("Ingrese el número de filas: ");
    scanf("%d", &n);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &m);

    int A[n][m], B[n][m], C[n][m];

    srand(time(NULL));

    // Generar y mostrar matriz A
    printf("La matriz A es:\n");
    generarMatriz(n, m, A);
    imprimirMatriz(n, m, A);

    // Generar y mostrar matriz B
    printf("La matriz B es:\n");
    generarMatriz(n, m, B);
    imprimirMatriz(n, m, B);

    // Sumar las matrices A y B y mostrar matriz C
    printf("La matriz resultante (C = A + B) es:\n");
    sumarMatrices(n, m, A, B, C);
    imprimirMatriz(n, m, C);

    return 0;
}
