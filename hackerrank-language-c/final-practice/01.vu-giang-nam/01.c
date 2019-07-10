#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 1024


struct Box {
    int l,w,h;
};

int main()
{
    FILE *f;
    char inputfile[] = "/home/namgivu/NN/code/_NN_/some-c/hackerrank-language-c/final-practice/01.vu-giang-nam/01.txt";
    f = fopen(inputfile, "r"); if (f == NULL) exit(1);

    char s[MAX]; fgets(s, MAX, f); int n; n = atoi(s); //doc 1 so nguyen

    struct Box boxes[MAX];
    for (int i = 0; i < n; ++i) {
        struct Box b;
        fscanf(f, "%d %d %d", &b.l, &b.w, &b.h); //doc 3 so tren 1 hang cach nhau 1 khoang trang
        boxes[i] = b;
    }

    fclose(f);

    FILE* f2; char outputfile[] = "/home/namgivu/NN/code/_NN_/some-c/hackerrank-language-c/final-practice/01.vu-giang-nam/output.txt";
    f2 = fopen(outputfile, "w"); if (f2 == NULL) exit(1);

    for (int j = 0; j < n; ++j) {
        if (boxes[j].h<41) {
            int v = boxes[j].l * boxes[j].w * boxes[j].h;
            fprintf(f2, "%d\n", v);
        }
    }

    fclose(f2);
}
