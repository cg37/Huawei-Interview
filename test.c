#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char tmp[]="a10";
    int ans;
    ans = atoi(&tmp[1]);
    printf("ans = &d\n",ans);
}
atoi(&tmp[1]);