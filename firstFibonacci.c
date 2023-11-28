#include <stdio.h>
#include <likwid.h>

int fibonacci_abordagem_ingenua(int n) {
    if (n <= 1)
        return n;
    else {
        int a = 0; 
        int b = 1; 
        int temp;
        
        for (int i = 2; i <= n; i++) {
            temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
}


int main() {

    int n = 10000;
    int resultado;

    likwid_markerinit();
    likwid_markerStartRegion("Fibonacci");

    likwid_markerStartRegion("Runtime");
    resultado = fibonacci_abordagem_ingenua(n);
    likwid_markerStopRegion("Runtime");

    likwid_markerStopRegion("Fibonacci");
    likwid_markerClose();

    return 0;
}