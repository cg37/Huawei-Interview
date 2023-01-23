/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param numbers int整型一维数组 
 * @param numbersLen int numbers数组长度
 * @param target int整型 
 * @return int整型一维数组
 * @return int* returnSize 返回数组行数
 */
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* numbers, int numbersLen, int target, int* returnSize ) {
    // write code here
    int *ans;
    ans = (int *)malloc(2*sizeof(int));

    for(int i=0; i < numbersLen; i++) {
        if (numbers[i] > target)
            continue;
        for(int j = i + 1; j<numbersLen; j++) {
            if(numbers[i] + numbers[j] == target) {
                i = i + 1;
                j = j + 1;
                ans[0] = i;
                ans[1] = j;
                *returnSize = 2;
                return ans;
            }
        }
    }
    *returnSize = 0;
    return ans;
}

int main() {
    int nums[] = {3,2,4};

    int target = 6;
    int * returnSize = (int*) malloc (sizeof(int));
    int * res;
    res = twoSum(nums, 4, target, returnSize);
    for (int i = 0; i < *returnSize; i++) {
        printf("%d ", res[i]);
    }
    return 0;
}


