#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
class Solution{
public:
    int sortstr(int n) {
        vector<string> vec_str;
        while(n--) {
            string str;
            cin>>str;
            vec_str.push_back(str);
        }
        sort(vec_str.begin(),vec_str.end());
        for(string &s : vec_str) {
            cou<<s<<endl;
        }
    return 0;
    }
};
int main() {
    int num;
    std::cin>>num;
    Solution().sortstr(num);
    return 0;
}
/******************C yuyan********************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num;
    while (scanf("%d", &num) != EOF) {
        char data[num][101];
        for (int i=0; i<num; i++) {
            scanf("%s", data[i]);
        }  
 
        char temp[101];
        for (int i = 0; i<num-1; i++) {
            for (int j = i+1; j<num; j++) {
                if(strcmp(data[i], data[j])>0) {
                    strcpy(temp, data[i]);
                    strcpy(data[i], data[j]);
                    strcpy(data[j], temp);
                }
            }
        }
        for (int i=0;i<num; i++) {
            printf("%s\n",data[i]);
        }
    }
    return 0;
}
