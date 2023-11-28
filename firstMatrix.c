#include <stdio.h>
#include <likwid.h>

#define ARRAY_SIZE 1000

int main() {

    int matrix[ARRAY_SIZE][ARRAY_SIZE];
    int i, j, sum = 0;

    LIKWID_MARKER_INIT;
    for (i = 0; i < ARRAY_SIZE; i++) {
        for (j = 0; j < ARRAY_SIZE; j++)
            matrix[i][j] = rand() % 100;
    }

    LIKWID_MARKER_START("loop");
    for (i = 0; i < ARRAY_SIZE; i++) {
        for (j = 0; j < ARRAY_SIZE; j++) {

            if (matrix[i][j] >= 50)
                sum += matrix[i][j];
            
            else
                sum -= matrix[i][j];
        }
    }

    LIKWID_MARKER_STOP("loop");
    LIKWID_MARKER_CLOSE;

    return 0;
}