#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int hextodec(char *ch_num, int ch_len)
{
    int num = *ch_num;
    printf("num = %s\n", num);
    printf("len = %d\n", ch_len);
    // printf("ch_len = %d\n",ch_len);
    // if(memcmp(ch_num,"0x",2)!=0 || memcmp(ch_num,"0X",2)!=0)
    // {
    //     printf("input error!");

    //     return 0;
    // }    
    // int res = 0;
    // for(int i = ch_len;i > 1;i--)
    // {
    //     if(ch_num[i] >= 'A' && ch_num[i] <= 'F'){
    //         res += (ch_num[i]-'A'+10)*pow(16,ch_len-i);
    //     }
    //     else if(ch_num[i] >= 'a' && ch_num[i] <= 'f'){
    //         res += (ch_num[i]-'A'+10)*pow(16,ch_len-i);
    //     }
    //     else if(ch_num[i] >= '0' && ch_num[i] <= '9'){
    //         res += (ch_num[i]-'0')*pow(16,ch_len-i);
    //     }
    //     else
    //     {
    //         //printf("input error!");
    //     }
    // }
    // return res;
    return 0;
}

int main(void)
{
    char ch_num[4] = {0};
    memset(ch_num, 0, sizeof(ch_num));
    gets(ch_num);
    //hextodec(ch_num,sizeof(ch_num));
    printf("num = %s\n", ch_num+2);
    printf("len = %d\n", strlen(ch_num));
    if(memcmp(ch_num, "0x", 2) != 0 && memcmp(ch_num, "0X", 2) != 0) {
        printf("input error");
        return 0;
    }
    
    // {
    //     int res = system_trans(ch_num,strlen(ch_num)-1);//有效数据段是n-1
    //     printf("%d\n",res);
    // }  
    return 0;
    // system_trans(char *ch_num,int ch_len)
}


