#include "head.h"

class Solution{
public:
    int char_num(std::string s){
        std::vector<int> record(128,0);
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            record[s[i]] = 1;
        }
        for (int i = 0; i<128; i++) {
            if(record[i] == 1) {
                count++;
            }
        }
        std::cout<<count<<std::endl;
        return 0;
    }
};

int main() {
    std::string n;
    std::cin>>n;
    Solution().char_num(n);
    return 0;
}

/******************C写法*****************/
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main() {
//     int len=0;
//     char str[500];
//     int freq[128]={0};
//     int asc;
//     int ans = 0;

//     gets(str);
//     len = strlen(str);
//     //printf("len = %d\n", len);
//     for(int i = 0; i < len; i++) {
//         asc = (int)str[i];
//         //printf("asc of %c = %d\n", str[i], asc);
//         if (freq[asc] == 0 ) {
//             //printf("%d\n", freq[asc]);
//             freq[asc] = 1;
//             ans ++;
//         }
//     }
//     printf("%d\n",ans);
//     return 0;
// }