#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 1024


void mau_nhap() {
    //nhap tu tep
    FILE *f;
    char inputfile[] = "/path/to/input.txt";
    f = fopen(inputfile, "r"); if (f == NULL) exit(1);

    //... cac thao tac doc
    char s[MAX];  fgets(s, MAX, f);                     //doc 1 chuoi
    char s2[MAX]; fgets(s2, MAX, f); int n; n = atoi(s2); //doc 1 so nguyen

    fclose(f);
}


void mau_xuat() {
    //xuat ra tep
    FILE* f2; char outputfile[] = "/path/to/output.txt";
    f2 = fopen(outputfile, "w"); if (f2 == NULL) exit(1);

    //cac thao tac ghi vao tep
    char s[MAX];
    int i;
    fprintf(f2, "%s\n", s);
    fprintf(f2, "%d\n", i);

    fclose(f2);
}


int main()
{
    mau_nhap();
    mau_xuat();
}
