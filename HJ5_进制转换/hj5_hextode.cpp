#include<iostream>
#include<string>
#include<cmath>

using namespace std;


//一句话写法
int hextodex(){
    string hex_str;
    while(cin>>hex_str) {
        cout<<stoi(hex_str,0,16)<<endl;
    }
}

//类写法 
//输入一个十六进制的数值字符串
//输出该数值的十进制字符串

class Solution {
public:
    int Hextodec(string s) {
        int ans = 0;
        int bit = 0;
        for(int i = s.size()-1; i>1; i--)
        {
            if (s[i] >= 'A' && s[i]<='Z') {
                ans = ans + (s[i] - 'A' + 10) * pow(16,bit);
                bit = bit + 1;
            } else if(s[i] >= '0' && s[i]<='9') {
                ans = ans + (s[i] - '0') * pow(16,bit);
                bit = bit + 1;
            }
        }
        return ans;
    }
};
int main(void)
{
   
    string s; 
    while(cin >> s){ //读取字符串
        int ans = Solution().Hextodec(s);
        cout<<"ans = "<<ans<<endl;
    }
}



//C写法
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int hextodec(char *ch_num, int ch_len)
{
    if(memcmp(ch_num, "0x", 2) != 0 && memcmp(ch_num, "0X", 2) != 0) {
        printf("input error");
        return 0;
    }

    int res = 0;

    for (int i = ch_len - 1; i>1; i--)
    { 
        if (ch_num[i] >= 'A' && ch_num[i] <= 'F')
        {
            res = res + ((ch_num[i] - 'A'+ 10) * pow (16, ch_len - i -1));
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
    return res;
}
int main(){
    char ch_num[4] = {0};
    memset(ch_num, 0, sizeof(ch_num));
    gets(ch_num);
    int res;
    res = hextodec(ch_num,strlen(ch_num));
    printf("res = %d\n",res);
    return 0; 
}
*/



