#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution{
public:
    int coor_move(string s)
    {
        int dir_x = 0, dir_y = 0;
        int len = s.size();
        vector<string> sub_s;
        int sub_len = 0;
        for (int i = 0; i < len; i++) {
            if (s[i]!= ';') {
                sub_len++;
                continue;
            }
            sub_s.push_back(s.substr(i-sub_len, sub_len)); //从是s[0]到s[sub_eln]的子字符串;
            sub_len = 0;
        }
        for(int i = 0; i<sub_s.size(); i++) {
            int dis = 0; //distance
            if ((sub_s[i].size() == 3) && (sub_s[i][1] >= '0') && (sub_s[i][1] <= '9') 
                                    && (sub_s[i][2] >= '0') && (sub_s[i][2] <= '9')) {
                dis = (sub_s[i][1]-'0') * 10 + (sub_s[i][2]-'0');
            }
            if ((sub_s[i].size() == 2) && (sub_s[i][1] >= '0') && (sub_s[i][1] <= '9')) {
                dis = (sub_s[i][1] - '0');
            }
            if (sub_s[i].size() == 1) {
                dis = 0;
            }
            switch(sub_s[i][0]) {
                case 'A':
                    dir_x = dir_x - dis;
                    break;
                case 'S':
                    dir_y = dir_y - dis;
                    break;
                case 'D':
                    dir_x = dir_x + dis;
                    break;
                case 'W':
                    dir_y = dir_y + dis;
                    break;
                default:
                    break;
            }
        }
        cout<<dir_x<<','<<dir_y<<endl;
        return 0;
    }
};

int main() {
    string s;
    cin>>s;
    Solution().coor_move(s);
}













// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #include <stdio.h>
// int x = 0;
// int y = 0;
// void move(char dir, int dis) {
//     switch (dir) {
//         case'A':
//             x = x - dis;
//             break;
//         case'D':
//             x = x + dis;
//             break;
//         case'S':
//             y = y - dis;
//             break;
//         case'W':
//             y = y + dis;
//             break;      
//         default:
//             break;
//     }
// }

// void start() {
//     char tmp[10];//direction 
//     int len = 0; //分割字符串长度
//     while (~scanf("%[^;]", tmp)) {
//         int dis = 0;
//         getchar();
//         len = strlen(tmp);//获取长度，2,3才是合法值
//         switch (len) {
//             case 2:
//                 if (tmp[1] >= '0' && tmp[1] <= '9') {
//                     dis = tmp[1] - '0';
//                 }
//                 break;

//             case 3:
//                 if (tmp[1] >= '0' &&
//                         tmp[1] <= '9') {//第二个字符必须是数字
//                     if ( tmp[2] >= '0' &&
//                            tmp[2] <= '9') {//第三个字符也必须是数字
//                         dis = (tmp[1] - '0') * 10 + (tmp[2] - '0');
//                     }
//                 }
//                 break;
//             default:
//                 break;
//         }
//         move(tmp[0], dis);
//     }
//     printf("%d,%d\n", x, y);
// }
// int main() {
//     start();
//     return 0;
// }