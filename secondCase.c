#include <stdio.h>
#include <likwid.h>

int main() {

    int n = 100000;
    int x = 0;
    int A = 0;
    int B = 1;

    LIKWID_MARKER_INIT;
    LIKWID_MARKER_START("loop");
        
    if (x == A) {

        for (int i = 0; i < n; i++)
            FuncaoA(i);
    
    } else if (x == B) {
        for (int i = 0; i < n; i++)
            FuncaoB(i);

    } else {
        for (int i = 0; i < n; i++)
            FuncaoC(i);
    }

    LIKWID_MARKER_STOP("loop");
    LIKWID_MARKER_CLOSE;

    return 0;
}