#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

struct Date {
    int d;
    int m;
    int y;
};

void dtos(struct Date d, char* s) {
    sprintf(s, "%d/%d/%d", d.d, d.m, d.y);
}

int kiemtrahople(struct Date d) {
    // ngay tu 1 den 31
    if ( !(d.d>=1 && d.d<=31) ) {
        return 0;
    }

    // thang tu 1 den 12
    if ( !(d.m>=1 && d.m<=12) ) {
        return 0;
    }

    //TODO kiem tra them cac dkien khac vdu th2 co 28 ngay, th13578 10 12 co 31 ngay, con lai 30 ngay

    return 1;
}

void de1() {
    // nhap ngay
    struct Date d;  d.d=1;    d.m=2;   d.y=2000;
    struct Date d2; d2.d=1;   d2.m=22; d2.y=2000;

    // xuat ngay
    char sd[122];  dtos(d, sd);     printf("\n%s", sd);
    char sd2[122]; dtos(d2, sd2);   printf("\n%s", sd2);

    //kiem tra hop le
    printf("\nNgay: %s, hop le: %d", sd, kiemtrahople(d) );
    printf("\nNgay: %s, hop le: %d", sd2, kiemtrahople(d2) );
}

void de2() {
    // nhap ngay
    struct Date ngaysinh; ngaysinh.d=2; ngaysinh.m=1;   ngaysinh.y=2000;
    struct Date homnay;   homnay.d=28;  homnay.m=6;     homnay.y=2019;

    int tuoi = homnay.y - ngaysinh.y;
}


int main() {
//    de1();
    de2();
    return 1;

    /*
     * De bai

     * 01 nhap vao ngay D, kiem tra tinh hop le cua ngay

     * 02 nhap vao ngay sinh D1, va ngay hom nay D2
     *    tinh tuoi

     * */

}
