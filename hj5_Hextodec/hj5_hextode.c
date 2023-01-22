#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int hextodec(char *ch_num, int ch_len)
{
    ;
}

int main(void)
{
    char ch_num[4];
    
    memset(ch_num, 0, sizeof(ch_num));

    gets(ch_num);

    if(memcmp(ch_num, "0x", 2) != 0 && memcmp(ch_num, "0X", 2) != 0) {
        printf("input error");
        return 0;
    }
    

    int res = 0;
    int ch_len = strlen(ch_num);

    for (int i = ch_len-1; i>1; i--)
    { 
        if (ch_num[i] >= 'A' && ch_num[i] <= 'F')
        {
            res = res + ((ch_num[i] - 'A'+ 10) * pow (16, ch_len - i -1));
        }
        else if (ch_num[i] >= 'a' && ch_num[i] <= 'f')
        {
            res = res + ((ch_num[i] - 'a'+ 10) * pow (16, ch_len - i -1));
        }
        else if (ch_num[i] >= '0' && ch_num[i] <= '9')
        {
            res = res + ((ch_num[i] - '0' ) * pow (16, ch_len - i -1));
        }
        else
        {
            printf ("Input Error");
            return 0;  
        }
    }

    printf("res = %d\n",res);
    return 0;
}


