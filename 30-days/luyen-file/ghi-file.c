#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <zconf.h>

int main() {

    // chuan bi tep
    FILE* f;
    char outputfile[] = "/home/namgivu/NN/code/ApTech/luyen-file/ghi-file.txt";

    // mo tep
    f = fopen(outputfile, "w");
    if (f == NULL) { // khong mo duoc tep
        exit(1);
    }

    //region ghi tep
    int n=4444;
    printf("%d\n", n);
    fprintf(f, "%d\n", n);

    char* s="a bb ccc";
    fprintf(f, "%s\n", s);
    //endregion ghi tep

    // dong tep
    fclose(f);
}
