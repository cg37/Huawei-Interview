#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int x = 0;
    int y = 0;

    while(1) {
        char tmp[4] = {'\0'};
        if (scanf("%[^;]", tmp) == EOF) {
            break;
            //printf("tmp = %s", tmp);
        }
        printf("tmp = %s\n", tmp);
        //printf("len = %d\n", strlen(tmp));
        printf("%c\n", tmp[0]);
        
        getchar(); // 去掉';'
        if (strlen(tmp) > 3)
            printf("strlen>3");
            continue;
        if (tmp[0] != 'A' && tmp[0] != 'D' && tmp[0] != 'S' && tmp[0] != 'W')
            continue;
        if (tmp[1] > '9' || tmp[1] < '0')
            continue;
        if (strlen(tmp) == 3) {
            if (tmp[2] > '9' || tmp[2] < '0')
                continue;
        }

        switch(tmp[0]) {
            case 'A':
                x -= atoi(&tmp[1]);
                break;
            case 'D':
                x += atoi(&tmp[1]);
                break;
            case 'S':
                y -= atoi(&tmp[1]);
                break;
            case 'W':
                y += atoi(&tmp[1]);
                break;
        }
    }
    printf("%d,%d\n", x, y);
    return 0;
}














