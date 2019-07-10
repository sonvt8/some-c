#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


#define MAX 1024

int main()
{
    /* ref. https://www.hackerrank.com/challenges/students-marks-sum/problem*/
    int marks[MAX];

    FILE *f; char inputfile[] = "/home/namgivu/NN/code/_NN_/some-c/hackerrank-language-c/final-practice/00/00.txt";
    f = fopen(inputfile, "r"); if (f == NULL) exit(1);

    char s[MAX]; fgets(s, MAX, f); int n; n = atoi(s);
    for (int i = 0; i < n; ++i) {
        char s[MAX]; fgets(s, MAX, f); int m; m = atoi(s);
        marks[i] = m;
    }

    fgets(s, MAX, f); // chan la :b, le la :g
    char g; g = s[0];

    fclose(f);

    // tinh toan
    int sum = 0;

    int h;
    h = (g == 'b') ? 0 : 1;
    //if (g == 'b') { h = 0; }
    //else          { h = 1; }

    for (int j = 0; j < n; ++j) {
        if (j % 2 == h) { // boy day
            sum += marks[j];
        }
    }

    //xuat ra tep
    FILE* f2; char outputfile[] = "/home/namgivu/NN/code/_NN_/some-c/hackerrank-language-c/final-practice/00/output.txt";
    f2 = fopen(outputfile, "w"); if (f2 == NULL) exit(1);
    fprintf(f2, "%d", sum);
    fclose(f2);
}
