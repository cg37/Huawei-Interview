#include <vector>
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;
class Solution{
public: 
    int IPtoNum(string s) {
        vector<long> num(4, 0);
        int point = 0;
        for(int i = 0; i<s.size(); i++) {
            if(s[i] != '.') {
                num[point] = num[point] * 10 +s[i] - '0';
            } else {
                point++;
            }
        }
        long ans;
        ans = num[0]<<24 | num[1] <<16 | num[2] << 8 | num[3];
        cout<<ans<<endl;
        return 0;
    }
    int numtoIP(long n) {
        string ip = "";
        ip = to_string((n>>24) & 0xff);
        ip = ip + '.';
        ip = ip + to_string((n>>16) & 0xff);
        ip = ip + '.';
        ip = ip + to_string((n>>8) & 0xff);
        ip = ip + '.';
        ip = ip + to_string((n & 0xff));
        cout<<ip<<endl;
        return 0;
    }
};
int main() {
    string ip;
    long num;
    while(cin >> ip >> num) {
        Solution().IPtoNum(ip);
        Solution().numtoIP(num);
    }
    return 0;
}














/**********************C 写法 ******************************/
//  #include <stdio.h>
// void iptodec() {
//     int ip[4];
//     int ans;
//     scanf("%d.%d.%d.%d", &ip[3], &ip[2], &ip[1], &ip[0]);
//     ans = (ip[3] << 24) + (ip[2] << 16) + (ip[1] << 8) + (ip[0]);
//     printf("%u\n",ans);
// }
// void dectoip() {
//     unsigned int ip;
//     unsigned int ans[4];
//     scanf("%d",&ip);
//     ans[0] = ip >> 24;
//     ans[1] = (ip >> 16) & 0XFF;
//     ans[2] = (ip >> 8) & 0XFF;
//     ans[3] = ip & 0xff;
//     printf("%d.%d.%d.%d", ip >> 24, (ip >> 16) & 0XFF, (ip >> 8) & 0XFF, ip & 0xff);
// }

// void trans() {
//     int ip_0, ip_1, ip_2, ip_3;
//     unsigned int ip_dec;
//     unsigned int ip_trans;
//     while (scanf("%d.%d.%d.%d", &ip_3, &ip_2, &ip_1, &ip_0) != EOF) {
//         scanf("%d", &ip_dec);
//         ip_trans = (ip_3 << 24) + (ip_2 << 16) + (ip_1 <<8) + ip_0;
//         printf("%u\n", ip_trans);

//         ip_3 = ip_dec >> 24;
//         ip_2 = (ip_dec >> 16) & 0xff;
//         ip_1 = (ip_dec >> 8) & 0xff;
//         ip_0 = ip_dec & 0xff;
//         printf("%d.%d.%d.%d", ip_3, ip_2, ip_1, ip_0);
//     }
// }

// int main() {
//     trans();
//     return 0;
// }

// int main()
// {
//     unsigned int a, data[4];
        
//     scanf("%d.%d.%d.%d", &data[0], &data[1], &data[2], &data[3]);
//     scanf("%d", &a);
       
//     printf("%u\n", (data[0]<<24)+(data[1]<<16)+(data[2]<<8)+data[3]);
//     printf("%d.%d.%d.%d", a>>24, (a>>16)&0xff, (a>>8)&0xff, a&0xff);
// }




