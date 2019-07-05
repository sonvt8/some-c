#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


int max_of_four(int a, int b, int c, int d) {
    int m=a;
    if (b>m) { m=b; }
    if (c>m) { m=c; }
    if (d>m) { m=d; }
    return m;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int max4 = max_of_four(a, b, c, d);

    printf("%d", max4);

    return 0;
}

