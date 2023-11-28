#include <stdio.h>
#include <likwid.h>

int main() {

    int n = 100000;
    int x = 0;
    int A = 0;
    int B = 1;

    LIKWID_MARKER_INIT;
    LIKWID_MARKER_START("loop");

    for (int i = 0; i < n; i++) {
     
        if (x == A) {
            FuncaoA(i);
            x = B;
        
        } else if (x == B) {
            FuncaoB(i);
            x = 10;

        } else {
            FuncaoC(i);
            x = A;
        }
    }

    LIKWID_MARKER_STOP("loop");
    LIKWID_MARKER_CLOSE;

    return 0;
}