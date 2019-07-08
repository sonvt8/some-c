#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


void f3();

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

}

int main() {
    f3();
}
