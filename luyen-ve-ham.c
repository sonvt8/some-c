#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool lasochan(int so) {
    if (so%2 == 0) {
        return true;
    } else {
        return false;
    }
}

int lasochan2(int so) {
    /*
     * tra ve 1 neu chan
     *        0 neu le
     * */
    if (so%2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

void xuatmang(int m[], int len) {
    printf("Mang:\n");
    for(int i=0; i<len; i++) {
        printf("\t%d", m[i]);
    }
    printf("\n");
}


void trichsochan(int m[], int len,  int x[], int* lenX) {
    //*lenX = 1;

    for(int i=0; i<len; i++) {
        if (m[i]%2==0) {
            x[*lenX]=m[i]; *lenX = *lenX + 1;
        }
    }
}

void xuatsochan(int m[], int len) {
    printf("Mang chan:\n");
    for(int i=0; i<len; i++) {
        if (m[i]%2==0) {
            printf("\t%d", m[i]);
        }
    }
    printf("\n");
}

int main() {
    /*
     * cho mang A co N so nguyen
     * tao mang B chua cac so chan cua A
     * */
    int N = 10;
    //int A[] = {16, 23, 13, 11, 42, 4, 323, 43, 14214, 2};
    int A[] = {1, 22, 333, 444, 5, 66, 777, 8, 99, 10};

    int B[N];
    B[0]=999;
    B[1]=88;
    int lenB=2;

    xuatmang(A, N);
    xuatmang(B, lenB);

    printf("\n---------------\n");
    xuatsochan(A, N);

    printf("\n---------------\n");
    printf("Trich mang\n");
    trichsochan(A, N, B, &lenB);
    xuatmang(B, lenB);
}

