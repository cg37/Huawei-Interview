#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
// int main(void)
// {
//     int *ans;
//     ans = (int*)malloc(2 * sizeof(int));
//     memset(ans, 0, 2 * sizeof(ans));
//     char tmp[4] = {'\0'};
//     while (scanf("%[^;]", tmp) != EOF) {
//         //scanf("%[^;]", tmp);
//         if (scanf("%[^;]", tmp) == EOF) {
//             break;
//         }
//         getchar();
//         // printf("tmp = %s\n", tmp);
//         // printf("len = %d\n", strlen(tmp));
//         // printf("tmp[0] = %c\n", tmp[0]);
//         if (strlen(tmp) > 3) {
//             printf("wrong len\n");
//             continue;
//         }          
//         if (tmp[0] != 'A' && tmp[0] != 'S' && tmp[0] != 'D' && tmp[0] != 'W') {
//             printf("wrong 0\n");
//             continue;
//         }           
//         if (tmp[1] > '9' || tmp[1] < '0') {
//             printf("1\n");
//             continue;
//         }           
//         if (tmp[2] > '9' || tmp[2] < '0') {
//             printf("2\n");
//             continue;
//         }           
//         //printf("input correct\n");
//         switch(tmp[0]) {
//             case 'A':
//                 ans[0] = ans[0] - atoi(&tmp[1]);
//                 //printf("x = %d\n", ans[0]);
//                 break;
//             case 'D':
//                 ans[0] = ans[0] + atoi(&tmp[1]);
//                 //printf("x = %d\n", ans[0]);
//                 break;
//             case 'S':
//                 ans[1] = ans[1] - atoi(&tmp[1]);
//                 //printf("y = %d\n", ans[1]);
//                 break;
//             case 'W':
//                 ans[1] = ans[1] + atoi(&tmp[1]);
//                 //printf("y = %d\n", ans[1]);
//                 break;
//         }
//         printf("x = %d\n", ans[0]);
//         printf("y = %d\n", ans[1]);
//     }
//     printf("Hello World");
//     printf("ans = {%d, %d}\n", ans[0],ans[1]);
//     return 0;
// }

// bool isValid(char *s, char &dir, int &dis) {    
//     int len_s=sizeof(s);
//     if (len_s(s)<2 || len_s(s)>3) {
//         return false;
//     }
//     if (s[0] !='A' && s[0] != 'D' && s[0] != 'W'&& s[0] != 'S') {
//         return false;
//     }
//     dir = s[0];
//     if (len_s == 2 && s[1] >='0' && s[1] <='9')
//     {
//         dis = s[1] - '0';
//         return true;
//     }
//     if (len_s == 3 && s[1] >='0' && s[1] <='9' s[2] >='0' && s[2] <='9') {
//         dis = (s[1] - '0') * 10 +(s[2] - '0');
//         return true;
//     }
// }

//以下是Senky的代码：
//首先将字符串的;号前的指令读取，每接受一个指令就移动一次坐标
//依题意得只有字符串长度为两位或三位的指令才有效，此时不移动或者移动0步
//char '1'的ACII是49，和int 1间隔48，所以char -48是对应的int真值
int point_x = 0;
int point_y = 0;

void move(char direction, int num) {
    switch (direction) {
        case'W':
            point_y += num;
            break;

        case'A':
                point_x -= num;
            break;

        case'S':
            point_y -= num;
            break;

        case'D':
                point_x += num;
            break;

        default:
            break;
    }
}

void start() {
    char direction[10];//方向
    int len = 0; //分号前面字符串的长度
    while (~scanf("%[^;]", direction)) {
        int num = 0;
        getchar();//处理分号
        len = strlen(direction);//获取长度，2,3才是合法值
        switch (len) {
            case 2:
                if (direction[1] >= '0' && direction[1] <= '9') {
                    num = (int)direction[1] - 48;
                }
                break;

            case 3:
                if (direction[1] >= '0' &&
                        direction[1] <= '9') {//第二个字符必须是数字
                    if ( direction[2] >= '0' &&
                            direction[2] <= '9') {//第三个字符也必须是数字
                        num = ((int)direction[1] - 48) * 10 + (int)direction[2] - 48;
                    }
                }
                break;

            default:
                break;
        }

        move(direction[0], num);
        // printf("当前方向：%s 当前num:%d ",direction[0], num);
        // printf("move%c后：%d,%d\n", direction[0], point_x, point_y);
    }
    printf("%d,%d\n", point_x, point_y);
}
int main() {
    start();
    return 0;//编辑于2022/10/12
}