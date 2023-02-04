#include <stdio.h>
#include <iostream>
using namespace std;

void sodabottle() {
    int empty_bottle;
    int tmp;
    int ans;
    while(scanf("%d", &empty_bottle) != EOF) {
        tmp = empty_bottle;
        if(tmp>=2) {
            ans=empty_bottle/2;
            printf("%d\n",ans);
        }
        else {
            printf("\n");
        }
    }
}
int soda_bottle(int num){
    int ans = 0;
    int count = 0;
    if(num<=0) {
        return 0;
    }
    while (num>=2) {
        num = num +1;
        count = num /3;
        num = num %3 + count -1;
        ans = ans +count;
    }
    return ans;
}
int main() {
    //cpp
    int n;
    while(cin>>n) {
        cout<<soda_bottle(n)<<endl;
    }
    int test;
    test = 2/1;
    cout<<test<<endl;
    //c
    //sodabottle();
    return 0;
}