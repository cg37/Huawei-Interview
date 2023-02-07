#include <vector>
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;
class Solution{
public:
    bool verify_len(string s) {
        if (s.size()>8) {
            return true;
        }
        return false;
    }
    bool is_Num(char s) {
        if(s >= '0' && s <= '9'){
            return true;
        }
        return false;
    }
    bool is_lower(char s) {
        if(s >= 'a' && s <= 'z') {
            return true;
        }
        return false;
    }
    bool is_upper(char s) {
        if(s>='A' && s<= 'Z') {
            return true;
        }
        return false;
    }
    bool is_repeat(string s) {
        for(int i = 0; i<s.size()-3; i++) {
            for(int j = i+3; j<s.size(); j++) {
                if (s[i] == s[j] && s[i+1] == s[j+1] && s[i+2] == s[j+2]) {
                    return false;
                }
            }
        }
        return true;
    }
    void verify_pwd(string s){
        int islen = verify_len(s); //长
        int isnum = 0;
        int islower = 0;
        int isupper = 0;
        int issign = 0;
        int isrepeat = is_repeat(s);
        //cout<<"repeat?"<<is_repeat(s)<<endl;
        for(int i = 0; i <s.size(); i++) {
            if(is_Num(s[i])) {
                isnum = 1;
                continue;
            } else if(is_lower(s[i])) {
                islower = 1;
                continue;
            } else if(is_upper(s[i])) {
                isupper = 1;
                continue;
            } else {
                issign = 1;
            } 
        }
        //cout<<"len?"<<islen<<endl;
        
        if(islen && (isnum+islower+isupper+issign >= 3) && isrepeat) {
            cout<<"OK"<<endl;
        } else {
            cout<<"NG"<<endl;
        }
    }
};
int main() {
    string pwd;
    while(getline(cin, pwd)) {
        Solution().verify_pwd(pwd);
    }
    return 0;
}










/***********C语言写法**********/
// #include <string.h>
// #include <stdio.h>
// #include <stdbool.h>
// bool verifyLen (char *pwd, int len) {
//     if (len > 8) {
//         return true;
//     }
//     return false;
// }

// bool isNum (char l) {
//     if (l >= '0' && l <= '9') {
//         return true;
//     }
//     return false;
// }

// bool isLower (char l) {
//     if (l >= 'a' && l <= 'z') {
//         return true;
//     }
//     return false;
// }

// bool isUpper(char l) {
//     if (l >= 'A' && l <= 'Z') {
//         return true;
//     }
//     return false;
// }

// bool isRepeat(char *pwd, int len) {
//     for(int i = 0; i <= len - 3; i++) {
//         for (int j = i+3; j < len; j++) {
//             if(pwd[i] == pwd[j] && 
//                     pwd[i + 1] == pwd[j + 1] && 
//                     pwd[i + 2] == pwd[j + 2]) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }
// void verifypwd() {
//     char pwd[101];
//     while(scanf("%s", pwd) != EOF) {
//         int pwd_len = strlen(pwd);
//         int verifylen = verifyLen(pwd, pwd_len);
//         int isnum = 0, islower = 0, isupper = 0, issign = 0;
//         int isrepeat;
//         isrepeat = isRepeat(pwd, pwd_len);

//         for(int i=0; i < pwd_len; i++) {
//             if (isNum(pwd[i])) {
//                 isnum = 1;
//                 continue;
//             }
//             else if (isLower(pwd[i])) {
//                 islower = 1;
//                 continue;
//             }
//             else if (isUpper(pwd[i])) {
//                 isupper = 1;
//                 continue;
//             }
//             else {
//                 issign = 1;
//             }
//         }
//         //if (verifylen && )
//         //printf("len = %d\n", pwd_len);
//         //printf("is correct = %d\n", isnum+islower+isupper+issign);
//         //printf("isrepeat = %d", isrepeat);
//         if (verifylen && 
//             isnum + islower + isupper + issign >= 3 &&
//             isrepeat
//             ) {
//         printf ("OK");
//         }
//         else 
//         printf ("NG");
//     }
// }
// int main() {
//     verifypwd();
//     return 0;
// }








