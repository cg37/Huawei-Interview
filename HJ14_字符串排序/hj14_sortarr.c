#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num;
    while (scanf("%d", &num) != EOF) {
        char data[num][101];
        for (int i=0; i<num; i++) {
            scanf("%s", data[i]);
        }  
        // for (int i = 0; i<num; i++) {
        //     printf("%c\n",data[i][0]);
        // }
        char temp[101];
        for (int i = 0; i<num-1; i++) {
            for (int j = i+1; j<num; j++) {
                if(strcmp(data[i], data[j])>0) {
                    strcpy(temp, data[i]);
                    strcpy(data[i], data[j]);
                    strcpy(data[j], temp);
                }
            }
        }
        for (int i=0;i<num; i++) {
            printf("%s\n",data[i]);
        }
    }
    return 0;
}
