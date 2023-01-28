#include <stdio.h>
#include <string.h>

void reversearray() {
    char arr[10000];
    char revarr[10000];
    gets(arr);
    //fgets(arr, sizeof(arr),stdin);
    int len=strlen(arr);
    //printf("len = %d", len);
    for (int i = len -1 ;i >=0; i--) {
        //printf("%s", arr[len-i-1]);
        revarr[len - i -1]=arr[i];
    }
    printf("%s\n",revarr);
}
void revarr_1() {
    char arr[10000];
    int i = 0;
    while((arr[i] = getchar())!='\n') {
        i++;
    }
    i = i - 1;
    while(i >= 0) {
        printf("%c", arr[i]);
        i--;
    }
}
int main() {
    //reversearray();
    revarr_1();
    return 0;
}