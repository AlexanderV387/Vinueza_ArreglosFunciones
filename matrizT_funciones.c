#include <stdio.h>

// Función para inicializar la matriz tridimensional
void inicializarMatriz(int d, int n, int m, int matriz[d][n][m]) {
    for (int k = 0; k < d; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matriz[k][i][j] = (k == d - 1) ? 1 : 0;
            }
        }
    }
}

// Función para mostrar la matriz tridimensional
void mostrarMatriz(int d, int n, int m, int matriz[d][n][m]) {
    for (int k = 0; k < d; k++) {
        printf("Matriz %d:\n", k + 1);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                printf("%d ", matriz[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main() {
    int m, n, d;
    printf("Ingrese el número de matrices: ");
    scanf("%d", &d);
    printf("Ingrese el número de filas: ");
    scanf("%d", &n);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &m);

    int matrizTridimensional[d][n][m];

    // Inicializar la matriz tridimensional
    inicializarMatriz(d, n, m, matrizTridimensional);

    // Mostrar la matriz tridimensional
    mostrarMatriz(d, n, m, matrizTridimensional);

    return 0;
}
