#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int len=0;
    char str[500];
    int freq[128]={0};
    int asc;
    int ans = 0;

    gets(str);
    len = strlen(str);
    //printf("len = %d\n", len);
    for(int i = 0; i < len; i++) {
        asc = (int)str[i];
        //printf("asc of %c = %d\n", str[i], asc);
        if (freq[asc] == 0 ) {
            //printf("%d\n", freq[asc]);
            freq[asc] = 1;
            ans ++;
        }
    }
    printf("%d\n",ans);
    return 0;
}