#include <stdio.h>
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
int main() {
    sodabottle();
    return 0;
}