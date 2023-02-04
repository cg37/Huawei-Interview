#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <vector>
using namespace std;

int randomnumber(int n) {
    vector<int> num_hash(1000,0);
    int num;
    while(n--) {
        cin>>num;
        num_hash[num] = 1;
    }
    for(int i=0;i<1001;i++) {
            if(num_hash[i] == 1){
                cout<<i<<endl;
            }
        }
    return 0;
}
int main() {

    int n;//N个随机数
    while(cin>>n){
        randomnumber(n);
    }   
    return 0;
 /**   *****************************      */
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
}
