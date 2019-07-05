#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


void update(int *p1, int *p2) {
    int s = *p1 + *p2;
    int d = abs(*p1 - *p2);

    *p1 = s;
    *p2 = d;
}


int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
