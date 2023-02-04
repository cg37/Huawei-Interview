#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int hextodec(char *ch_num, int ch_len)
{
    if(memcmp(ch_num, "0x", 2) != 0 && memcmp(ch_num, "0X", 2) != 0) {
        printf("input error");
        return 0;
    }

    int res = 0;
    //int ch_len = strlen(ch_num);

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
//一句话写法
int hextodex(){
    string hex_str;
    while(cin>>hex_str) {
        cout<<stoi(hex_str,0,16)<<endl;
    }
}

int main(void)
{
    /*C 
    char ch_num[4] = {0};
    memset(ch_num, 0, sizeof(ch_num));

    gets(ch_num);
    int res;
    res = hextodec(ch_num,strlen(ch_num));
    printf("res = %d\n",res);
    return 0; */

}

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main_1(){
    string s; 
    while(cin >> s){ //连续读取字符串
        int bit = 0; //记录当前位数
        int res = 0;
        for(int i = s.length() - 1; i > 1; i--){
            if(s[i] >= '0' && s[i] <= '9'){
                res += (s[i] - '0') * pow(16, bit); //当前数字乘16的位数次方
                bit++;
            }
            else if(s[i] >= 'A' && s[i] <= 'F'){
                res += (s[i] - 'A' + 10) * pow(16, bit); //字母要转化成数字
                bit++;
            }
        }
        cout << res << endl;
    }
    return 0;
}




