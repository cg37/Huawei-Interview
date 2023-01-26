#include <string.h>
#include <stdio.h>
#include <stdbool.h>

bool verifyLen (char *pwd,int len) {
    if (len >8) {
        return true;
    }
    return false;
}

bool isNum (char l) {
    if (l >= '0' && l <= '9') {
        return true;
    }
    return false;
}

bool isLower (char l) {
    if (l >= 'a' && l <= 'z') {
        return true;
    }
    return false;
}

bool isUpper(char l) {
    if (l>= 'A' && l <= 'Z') {
        return true;
    }
    return false;
}

bool isRepeat(char *pwd, int len) {
    for(int i = 0; i <= len - 3; i++) {
        for (int j = i+3; j < len; j++) {
            if(pwd[i]==pwd[j] && 
                    pwd[i + 1] == pwd[j + 1] && 
                    pwd[i + 2] == pwd[j + 2]) {
                return false;
            }
        }
    }
    return true;
}
void verifypwd() {
    char pwd[101];
    while(scanf("%s", pwd) != EOF) {
        int pwd_len = strlen(pwd);
        int verifylen = verifyLen(pwd,pwd_len);
        int isnum=0, islower=0, isupper=0, issign=0;
        int isrepeat;
        isrepeat = isRepeat(pwd,pwd_len);

        for(int i=0; i<pwd_len; i++) {
            if (isNum(pwd[i])) {
                isnum = 1;
                continue;
            }
            else if (isLower(pwd[i])) {
                islower = 1;
                continue;
            }
            else if (isUpper(pwd[i])) {
                isupper = 1;
                continue;
            }
            else {
                issign = 1;
            }
        }
        //if (verifylen && )
        //printf("len = %d\n", pwd_len);
        //printf("is correct = %d\n", isnum+islower+isupper+issign);
        //printf("isrepeat = %d", isrepeat);
        if(verifylen && 
            isnum+islower+isupper+issign>=3 &&
            isrepeat
            ) {
        printf("OK");
        }
        else 
        printf("NG");
    }
    
}
int main() {
    verifypwd();
    return 0;
}








