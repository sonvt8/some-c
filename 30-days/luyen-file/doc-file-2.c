#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <zconf.h>


struct DanhBa {
    char ten[1024];
    char dienthoai[1024];
};


int main() {

    // chuan bi tep
    FILE* f;
    char inputfile[] = "/home/namgivu/NN/code/ApTech/luyen-file/luyen-file-2.txt";

    // mo tep
    f = fopen(inputfile, "r");
    if (f == NULL) { // khong mo duoc tep
        exit(1);
    }

    //region doc tep

    // doc n
    int MAX=1024;
    char s[MAX];
    char *s1, *s2;
    struct DanhBa db [MAX];


    fgets(s, MAX, f);
    int n; n = atoi(s);

    for (int i=0; i<n; i++) {
        fgets(s, MAX, f);
        s1 = strtok(s,    " ");
        s2 = strtok(NULL, " ");

        strcpy(db[i].ten,       s1);
        strcpy(db[i].dienthoai, s2);
    }

    //endregion doc tep


    // dong tep
    fclose(f);

    //region ktra kqua
    printf("%d\n", n);

    //printf("%s\n", s); // luu y, bien s bi thay doi khi truyen cho strtok()

    for (int i=0; i<n; i++) {
        printf("%s %s", db[i].ten, db[i].dienthoai);
    }

    //endregion ktra kqua
}
