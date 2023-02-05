#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isbrotherword(char* a, char* b) {
    int freq[26] = {0};
    if(strcmp(a,b) == 0 || strlen(a) != strlen(b)) {
        return 0;
    }
    else {
        for (int i=0; b[i]!=0; i++) {
            freq[a[i]-'a']++;
            freq[b[i]-'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
            return 0;
            }
        }
    }
    return 1;//是兄弟单词
}

int main() {
    char word[1000][11];
    char sort[1000][11];
    char wrt[12];
    int num;
    int k;
    while(scanf("%d", &num) != EOF) {
        for(int i = 0; i < num; i++) {
            scanf("%s", word[i]);
        }
        scanf("%s", wrt);
        scanf("%d", &k); 
        

        // printf("num = %d\n", num);
        // for (int i = 0; i<num; i++) {
        //     printf("word[%d] = %s\n", i, word[i]);
        // }
        // printf("\n");
        // printf("wrt = %s\n", wrt);
        // printf("k = %d\n", k);

        int ansnum=0;
        int flag;
        for(int i=0; i < num; i++) { 
            if (isbrotherword(word[i], wrt)) {
                strcpy(sort[ansnum], word[i]);
                ansnum++; 
            }
        }
        // for(int i=0; i<num; i++) {
        //     printf("sort = %s, ",sort[i]);
        // }
        // printf("\n");
        // for(int i=0; i<num; i++) {
        //     printf("word = %s, ", word[i]);
        // }
        // printf("\n");
        printf("%d\n",ansnum);  
        int index = 0;
        if(k <= ansnum) {
            for(int i=0;i<k;i++) {
                index = i;
                for(int j=i+1; j < ansnum; j++) {
                    if(strcmp(sort[index],sort[j]) > 0) {
                        index = j;
                    }
                }
                if (index != i) {
                    char tmp[11];
                    strcpy(tmp, sort[index]);
                    strcpy(sort[index], sort[i]);
                    strcpy(sort[i], tmp);
                }
            }
            printf("%s", sort[k-1]);
        }    
    }
    return 0;
}