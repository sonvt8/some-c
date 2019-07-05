#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


void f(int a) {
    a=22;
}

void f2(int* p) {
    p=22;
}

int main() {
    int i;
    //i=1; f(i);
    i=1; f2(&i);
    return 0;
}
