#include <stdio.h>
#include "lagrange.h"

double lagrange(double x, struct pontos *p) {

    double Px, Li;
    Px = 0.0;

    for (int i = 0; i < p->n; i++) {
        Li = 1.0;
        for (int j = 0; j < p->n; j++) {
            if (i != j) {
                Li *= (x-p->x[j]/(p->x[i]-p->x[j]));
            }
        }
        Px += Li*p->y[i];
    }

    return Px;
}