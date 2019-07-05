#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


void doi(int* a, int* b) {
    int t;
    t  = *a;
    *a = *b;
    *b = t;
}


void doi2(int* a, int* b) {
    int *t;
    t = a;
    a = b;
    b = t;
}


int main1() {
    int a = 1;
    int b = 22;

    printf("%d %d\n", a, b);
    doi(&a, &b);
    printf("%d %d\n", a, b);
}


int main() {
    int a = 1;
    int b = 22;

    printf("%d %d\n", a, b);
    doi2(&a, &b);
    printf("%d %d\n", a, b);
}
