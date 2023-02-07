#include "head.h"

/*
注意牛客网中本题需要从
@小到大返回答案且
@起始下标为1
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> twoSum_map;
        for(int i = 0; i<nums.size(); i++) {
            vector<int> ans;
            auto iter = twoSum_map.find(target - nums[i]);
            if(iter != twoSum_map.end()) {
                int ans_0 = min(i+1,(iter->second)+1);
                int ans_1 = max(i+1,(iter->second)+1);
                //返回的数组下标从1开始算起，保证target一定可以由数组里面2个数字相加得到
                return {ans_0,ans_1};
            }
            twoSum_map.insert(pair<int,int>(nums[i],i));
        }
        return {};
    }
};



/************************************************************************************************/
//C写法
// #include <stdio.h>
// #include <stdlib.h>

// int* twoSum(int* numbers, int numbersLen, int target, int* returnSize ) {
//     // write code here
//     int *ans;
//     ans = (int *)malloc(2*sizeof(int));

//     for(int i=0; i < numbersLen; i++) {
//         if (numbers[i] > target)
//             continue;
//         for(int j = i + 1; j<numbersLen; j++) {
//             if(numbers[i] + numbers[j] == target) {
//                 i = i + 1;
//                 j = j + 1;
//                 ans[0] = i;
//                 ans[1] = j;
//                 *returnSize = 2;
//                 return ans;
//             }
//         }
//     }
//     *returnSize = 0;
//     return ans;
// }

// int main() {
//     int nums[] = {3,2,4};

//     int target = 6;
//     int * returnSize = (int*) malloc (sizeof(int));
//     int * res;
//     res = twoSum(nums, 4, target, returnSize);
//     for (int i = 0; i < *returnSize; i++) {
//         printf("%d ", res[i]);
//     }
//     return 0;
// }


