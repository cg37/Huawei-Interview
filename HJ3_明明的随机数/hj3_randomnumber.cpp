#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int random_num(int n) {
        vector<int> num_hash(1000,0);
        int num;
        while(n--) {
            cin>>num;
            num_hash[num] = 1;
        }
        for(int i=0;i<1001;i++) {  //!!!!!1001
            if(num_hash[i] == 1){
                cout<<i<<endl;
            }
        }
    return 0;
    }
};
int main() {

    int n;//N个随机数
    while(cin>>n){
        Solution().random_num(n);
    }   
    return 0;
}
 /************* C 写法 *******************/
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//int main() {
    //c写法
    // int arr[1001]; 
    // int arr_len;
    // int num;
    // while(scanf("%d", &arr_len) != EOF) {
    //     memset(arr, 0, sizeof(arr));

    //     for (int i = 0; i < arr_len; i++) {
    //         scanf("%d", &num);
    //         arr[num] = 1;
    //     }

    //     for (int i = 1; i<=1000; i++) {
    //         if (arr[i]) {
    //             printf("%d\n", i);
    //         }
    //     }
    // }
    // return 0;
//}