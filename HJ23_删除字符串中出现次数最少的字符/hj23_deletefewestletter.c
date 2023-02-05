// 实现删除字符串中出现次数最少的字符，若出现次数最少的字符有多个，则把出现次数最少的字符都删除。输出删除这些单词后的字符串，字符串中其它字符保持原来的顺序。

// 数据范围：输入的字符串长度满足 
// 1 ≤ n ≤ 20
//保证输入的字符串中仅出现小写字母
// 输入描述：
// 字符串只包含小写英文字母, 不考虑非法输入，输入的字符串长度小于等于20个字节。

// 输出描述：
// 删除字符串中出现次数最少的字符后的字符串。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[21];
    memset(str,0,sizeof(str)); 
    int len=0;
    //int ans;
    
    while(scanf("%s", &str) != EOF) {
        len = strlen(str);
        int freq[26] = {0};
        int min = 20;
        //printf("len = %d\n",len);
        for(int i = 0; i < len; i++) {
            freq[str[i]-'a']++;
        }
        // for (int i = 0; i < len; i++) {
        //     if( freq[i] > 0) {
        //         printf("%c = %d\n", i+97, freq[i]);
        //     } 
        // }
        for(int i=0; i < 26; i++) {
            if(freq[i] > 0 && freq[i] < min) {
                min = freq[i];
            }
        }
        printf("min = %d\n", min);

        for (int i = 0; i < len; i++) {
            //printf("%c : %d\n",i+97, freq[i]);
            if(freq[str[i]-'a'] > min) {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}





                                                                                                                      




  
