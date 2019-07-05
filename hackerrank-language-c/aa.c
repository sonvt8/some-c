#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


int main() {
    int a;
    int *pa = &a;

    scanf("%d", &a);
    a=333;
    scanf("%d", pa);
    return 0;
}
