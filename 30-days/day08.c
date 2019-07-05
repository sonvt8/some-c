#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int tim(char *s, char* a[], int len_a)
{
    for(int i=0; i<len_a; i++) {
        if (strcmp(s, a[i]) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n=3;
    char* keys[] = {"key1", "key2", "key3" };
    int values[] = {1,      22,     333    };
    char* queries[] = {"key1", "key2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "key3" }; int Q=12;

    printf("%d\n", n);
    for(int i = 0; i < n; i++) { printf("%s ", keys[i]);    } printf("\n");
    for(int i = 0; i < n; i++) { printf("%d ", values[i]);  } printf("\n");
    for(int i = 0; i < Q; i++) { printf("%s ", queries[i]); } printf("\n");


    printf("\n\nBat dau tim\n");
    for(int i = 0; i < Q; i++) {
        char* q = queries[i];
        int v = tim(q, keys, n); // v aka vi_tri
        if (v!=-1) {
            printf("%s=%d\n", keys[v], values[v]);
            //                ^ q la day
        } else {
            printf("%s Not found\n", q);
        }
    }

}
