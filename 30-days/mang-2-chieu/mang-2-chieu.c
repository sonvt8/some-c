#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <zconf.h>

int MAX=1024;

struct Input {
    int M;   // thang
    int D;   // thu' cua ngay 01 thang M
    int DoM; // so luong ngay cua thang M
};

void nhapdauvao(char* filepath, struct Input* input) {
    FILE* f = fopen(filepath, "r"); if (f == NULL) { printf("Mo tep that bai"); exit(1); }

    char s[MAX];
    fgets(s, MAX, f);
    input->M = atoi(s);

    fgets(s, MAX, f);
    input->D = atoi(s);

    fgets(s, MAX, f);
    input->DoM = atoi(s);

    fclose(f);
}


void xuatlich(struct Input* input) {
    // xuat tu CN den truoc thu D
    int t;
    for (t=1; t<input->D; t++) {
        printf("\t.");
    }

    // xuat thu D den T7
    int i; i=1;
    for (t=input->D; t<=7; t++) {
        printf("\t%d", i++);
    }
    printf("\n");

    // xuat den het thang; xuong dong khi t7
//    for (int j=i; j<=input->DoM; j++) {
//        printf("\t%d", j);
//        if ( (j-i+1) % 7 == 0) {
//            printf("\n");
//        }
//    }

    // xuat den het thang; xuong dong khi t7
    int s=1;
    for (int j=i; j<=input->DoM; j++) {
        printf("\t%d", j); s++;
        if (s==8) {
            printf("\n");
            s=1;
        }
    }

    // xuat tuan cuoi cung
    if (s!=1) {
        for (int h=s; h<=7; h++) {
            printf("\t.");
        }
    }
    printf("\n");

}

int main() {
    char* debai1="Cho thang' :YYYY-mm co' ngay dau tien trong tha'ng la :DoW va co' :D ngay, in cac ngay cua thang do' theo dinh dang lich treo tuong`";
    char* debai2="Vdu 2019-07 2 31 la ngay 1/7/2019 la thu' 2 va thang co 31 ngay";

    struct Input ip;
    nhapdauvao("/home/namgivu/NN/code/ApTech/mang-2-chieu/mang-2-chieu.txt", &ip);
    xuatlich(&ip);
    exit(0);
}
