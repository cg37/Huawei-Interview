#include <vector>
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;
class Solution {
public:
    int jumpFloor(int n) {
        if (n ==1 || n ==2) {
            return n; 
        } else{
            return jumpFloor(n-1) + jumpFloor(n-2);
        }
        return 0;
    }
};
int main() {
    int n;
    int ans = 0;
    cin>>n;
    ans = Solution().jumpFloor(n);
    cout<<ans<<endl;
}





/***************C **************/
// #include <stdio.h>
// int jumpfloor_1 (int n) { //递归
//     if (n==1 || n==2) {
//         return n;
//     }
//     return jumpfloor_1(n-2) + jumpfloor_1(n-1);
// }

// int main() {
//     int n=0;
//     scanf("%d", &n);
//     int ans;
//     ans = jumpfloor_1(n);
//     printf("ans = %d\n", ans);
    
// }
