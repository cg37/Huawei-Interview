#include <iostream>
#include <string>
using namespace std;

//输入一行，代表要计算的字符串，非空，长度小于5000。
//输出一个整数，表示输入字符串最后一个单词的长度。
class Solution{
public:
    int lastWord(string s) {
        int len = s.size();
        int count = 0;
        for(int i = len - 1; i >=0; i--) {
            if (s[i] != ' ') {
                count++;
            } else if(count>0 && s[i] == ' ') {
                break;
            }
        }
        return count;
    }
};
int main() {
    string s;
    while (getline(cin, s)) { // 注意 while 处理多个 case
        int ans = Solution().lastWord(s);
        cout <<ans<< endl;
    }
    return 0;
}