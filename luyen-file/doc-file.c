#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <zconf.h>

int main() {

    // chuan bi tep
    FILE* f;
    char inputfile[] = "/home/namgivu/NN/code/ApTech/luyen-file/luyen-file.txt";

    // mo tep
    f = fopen(inputfile, "r");
    if (f == NULL) { // khong mo duoc tep
        exit(1);
    }

    //region doc tep

    // doc n
    int MAX=1024;
    char s[MAX];
    fgets(s, MAX, f);
    int n; n = atoi(s);

    // doc n dong
    /*
     * can 1 mang :n phan tu, moi phan tu kieu chuoi - chuoi i.e. char[MAX]
     * char s [MAX] [n]
     * char s [n] [MAX]
     * */
    char dong[n] [MAX]; //SAI char dong[n];
                        //SAI char dong[MAX] [n];

    for (int i=0; i<n; i++) {
        fgets(s, MAX, f);
        strcpy(dong[i], s);
    }

    //endregion doc tep


    // dong tep
    fclose(f);

    // ktra kqua
    printf("%d\n", n);
    for (int i=0; i<n; i++) {
        printf("%s", dong[i]);
    }
}
