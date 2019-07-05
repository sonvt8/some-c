#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

struct HV {
    char ho[11];
    char lot[11];
    char ten[11];
    int mahv;
    int namsinh;
};



void xuathv(struct HV h)
{
    printf("\n%d\t-\t%s %s %s", h.mahv, h.ho, h.lot, h.ten);
}

void xuatds(struct HV d[], int len) {
    for (int i=0; i<len; i++) {
        //printf("\n%d\t-\t%s %s %s", d[i].mahv, d[i].ho, d[i].lot, d[i].ten);
        xuathv(d[i]);
    }
}

int main() {
    struct HV h1;
    strcpy(h1.ho, "ho1");
    strcpy(h1.lot, "lot1");
    strcpy(h1.ten, "ten1");
    h1.mahv=1;
    h1.namsinh=1911;

    struct HV h2;
    strcpy(h2.ho, "ho22");
    strcpy(h2.lot, "lot22");
    strcpy(h2.ten, "ten22");
    h2.mahv=22;
    h2.namsinh=1922;

    struct HV h3;
    strcpy(h3.ho, "ho33");
    strcpy(h3.lot, "lot33");
    strcpy(h3.ten, "ten33");
    h3.mahv=33;
    h3.namsinh=1933;


    struct HV ds [3];
    ds[0] = h1;
    ds[1] = h2;
    ds[2] = h3;

    xuathv(ds[0]);
    xuathv(ds[1]);
    xuathv(ds[2]);

    printf("\n------------------\n");
    xuatds(ds, 3);


    printf("\n===============\n");
    struct HV ds2[] = { h1, h2, h3 };
    xuatds(ds2, 3);
}
