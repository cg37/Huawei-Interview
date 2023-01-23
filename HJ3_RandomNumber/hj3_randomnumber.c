#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int arr[1001]; 
    int arr_len;
    int num;
    while(scanf("%d", &arr_len) != EOF) {
        memset(arr, 0, sizeof(arr));

        for (int i = 0; i < arr_len; i++) {
            scanf("%d", &num);
            arr[num] = 1;
        }

        for (int i = 1; i<=1000; i++) {
            if (arr[i]) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
