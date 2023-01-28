#include <stdio.h>
#include <stdlib.h>

struct data {
    int index;
    int value;
} arr[500];
int cmparr(const void* a, const void* b) {
    return ((*(struct data*)a).index-(*(struct data*)b).index);
}

int main() {
    int num;
    while (scanf("%d", &num) != EOF) {
        for(int i=0; i<num; i++) {
            scanf("%d %d", &arr[i].index, &arr[i].value);
        }
        for(int i = 0; i < num; i++) {
            for(int j = i + 1; j < num; j++) {
                if (arr[i].index == arr[j].index) {
                    arr[i].value = arr[i].value + arr[j].value;
                    arr[j].value = 0;
                }
            }
        }
        qsort(arr, num, sizeof(arr[0]), cmparr);    
        for (int i = 0; i < num; i++) {
            if(arr[i].value != 0) {
                printf("%d %d\n", arr[i].index, arr[i].value);
            }
        }
    }
    return 0;
}