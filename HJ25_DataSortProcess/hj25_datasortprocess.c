#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int arr_I[200];
    int len_I;
    int arr_R[200];
    int len_R;

    scanf("%d", &len_I);
    for (int i=0; i<len_I; i++) {
        scanf("%d", &arr_I[i]);
    }
    scanf("%d", &len_R);
    for (int i=0; i<len_R; i++) {
        scanf("%d", &arr_R[i]);
    }
    for(int i=0; i<len_R-1; i++) { //排序R[i] 0123
        for (int j=i+1; j<len_R; j++) {
            if(arr_R[j] < arr_R[i]) {// 4 1
                int temp=arr_R[i];
                arr_R[i] = arr_R[j];
                arr_R[j] = temp;
            }
        }
    }
    for(int i=0; i < len_R - 1; i++) { //删除重复字符串
        for(int j = i + 1; j < len_R; j++) {
            if(arr_R[i] == arr_R[j]) {
                for (int k = j; k < len_R-1; k++) {
                    arr_R[k] = arr_R[k+1];
                }
                len_R--;
                j--;
            }
        }
    }

    //测试
    // for (int i=0;i<len_I; i++) { 
    //     printf("I[%d] = %d ", i, arr_I[i]);
    // }
    // printf("\n"); 
    // for (int i=0;i<len_R; i++) {
    //     printf("R[%d] = %d ", i, arr_R[i]);
    // }  
    // printf(" len_R = %d\n", len_R);

    int index = 1;
    int ans[500];
    for (int i = 0; i < len_R; i++) {
        int data_R = arr_R[i];
        int num = 0;
    
        index = index + 2;
        for (int j = 0; j < len_I; j++) {
            int data_I = arr_I[j];
            while (data_I) {
                int flag = 0;
                int mod_I = data_I % 10;
                int mod_R = data_R % 10;
                if (mod_I == mod_R) {
                    flag=1;
                    int div_R = data_R / 10;
                    int div_I = data_I / 10;
                    while(div_R) {
                        if (div_R % 10 != div_I % 10) {
                            flag = 0;
                        }
                        div_R = div_R / 10;
                        div_I = div_I / 10;
                    }
                }
                if  (flag) {
                    num++;
                    ans[index++] = j;
                    ans[index++] = arr_I[j];
                    break;
                }
                else {
                    data_I = data_I / 10;
                }
            }
        }
        if  (num > 0) {
            ans[index - 2*num - 2] = arr_R[i];
            ans[index - 2*num - 1] = num;
        }
        else {
            index = index - 2;
        }
    }
    if(index > 1) {
        ans[0] = index - 1;
    }
    for (int i=0; i < index; i++) {
        printf("%d ", ans[i]);
    }
    return 0;
    

}