#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


void f1() {
    // ref. https://www.hackerrank.com/challenges/frequency-of-digits-1/problem
    int dem[256];
    for (int i=0; i<256; i++) dem[i]=0;

    char s[] = "a1bb22ccc";
    int n = strlen(s);
    for (int i=0; i<n; i++) {
        char c=s[i]; // 1 ky tu cua chuoi :s

        dem[c]++;
    }

    for (char c='0'; c<='9'; c++) {
        printf("%d\t", dem[c]);
    }
}

void f2() {
    FILE* f; char inputfile[] = "/home/namgivu/NN/code/_NN_/some-c/hackerrank-language-c/05.ngau-nhien/inf2.txt";
    f = fopen(inputfile, "r");
    if (f == NULL) exit(1);

    int MAX=1024; char s[MAX];
    fgets(s, MAX, f); int n; n = atoi(s);

    char dong[n] [MAX];
    for (int i=0; i<n; i++) {
        fgets(s, MAX, f);
        strcpy(dong[i], s);
    }
    fclose(f);

    int sum=0;
    for (int i=0; i<n; i++) {
        int j = atoi(dong[i]);
        sum += j;
    }

    //xuat ket qua
    FILE* f2; char outputfile[] = "/home/namgivu/NN/code/_NN_/some-c/hackerrank-language-c/05.ngau-nhien/outf2.txt";
    f2 = fopen(outputfile, "w"); if (f2 == NULL) exit(1);
    fprintf(f2, "%d\n", sum);
    fclose(f2);
}

void f3() {
    //nhap
    FILE* f; char inputfile[] = "/home/namgivu/NN/code/_NN_/some-c/hackerrank-language-c/05.ngau-nhien/inf3.txt";
    f = fopen(inputfile, "r");
    if (f == NULL) exit(1);

    int MAX=1024; char s[MAX];
    fgets(s, MAX, f); int n0; n0 = atoi(s);
    fgets(s, MAX, f); int n1; n1 = atoi(s);
    fgets(s, MAX, f); int n2; n2 = atoi(s);
    fgets(s, MAX, f); int n3; n3 = atoi(s);
    fgets(s, MAX, f); int n4; n4 = atoi(s);
    fgets(s, MAX, f); int n5; n5 = atoi(s);
    fclose(f);

    //xuat
    FILE* f2; char outputfile[] = "/home/namgivu/NN/code/_NN_/some-c/hackerrank-language-c/05.ngau-nhien/outf3.txt";
    f2 = fopen(outputfile, "w"); if (f2 == NULL) exit(1);
    fprintf(f2, "Ngay sinh %d-%d-%d\n", n2, n1, n0);
    fprintf(f2, "Hom nay   %d-%d-%d\n", n5, n4, n3);
    fclose(f2);
}

void f3b() {
    //nhap
    FILE* f; char inputfile[] = "/home/namgivu/NN/code/_NN_/some-c/hackerrank-language-c/05.ngau-nhien/inf3.txt";
    f = fopen(inputfile, "r");
    if (f == NULL) exit(1);

    struct NTN {
        int ng;
        int th;
        int nm;
    };
    struct NTN ngaysinh;
    struct NTN homnay;

    int MAX=1024; char s[MAX];
    int n;
    fgets(s, MAX, f); n=atoi(s); ngaysinh.ng = n;
    fgets(s, MAX, f); n=atoi(s); ngaysinh.th = n;
    fgets(s, MAX, f); n=atoi(s); ngaysinh.nm = n;
    fgets(s, MAX, f); n=atoi(s); homnay.ng   = n;
    fgets(s, MAX, f); n=atoi(s); homnay.th   = n;
    fgets(s, MAX, f); n=atoi(s); homnay.nm   = n;
    fclose(f);

    //xuat
    FILE* f2; char outputfile[] = "/home/namgivu/NN/code/_NN_/some-c/hackerrank-language-c/05.ngau-nhien/outf3.txt";
    f2 = fopen(outputfile, "w"); if (f2 == NULL) exit(1);
    fprintf(f2, "Ngay sinh %d-%02d-%02d\n", ngaysinh.nm, ngaysinh.th, ngaysinh.ng);
    fprintf(f2, "Ngay sinh %d-%02d-%02d\n", homnay.nm,   homnay.th,   homnay.ng);
    fclose(f2);
}

int main() {
    //f3();
    f3b();
}
