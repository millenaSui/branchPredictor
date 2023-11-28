#include <stdio.h>
#include <likwid.h>

int fibonacci_abordagem_ingenua(int n) {
    if (n <= 1)
        return n;

    int *arr = (int *)malloc((n + 1) * sizeof(int));
    if (arr == NULL) {
        print("Erro na alocação de memória.\n");
        exit(EXIT_FAILURE);
    }

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= n; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    int result = arr[n];
    free(arr);
    return result;
}


int main() {

    int n = 10000;
    int resultado;

    likwid_markerinit();
    likwid_markerStartRegion("Fibonacci");

    resultado = fibonacci_abordagem_ingenua(n);

    likwid_markerStopRegion("Fibonacci");
    likwid_markerClose();

    return 0;
}