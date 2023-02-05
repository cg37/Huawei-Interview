#include <stdio.h>

int jumpfloor_1 (int n) { //递归
    if (n==1 || n==2) {
        return n;
    }
    return jumpfloor_1(n-2) + jumpfloor_1(n-1);
}
int jumpfloor_2(int n) {

}
int main() {
    int n=0;
    scanf("%d", &n);
    int ans;
    ans = jumpfloor_1(n);
    printf("ans = %d\n", ans);
    
}
