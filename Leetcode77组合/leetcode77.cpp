#include<vector>
using namespace std;
class Solution {
public:
//给定两个整数 n 和 k，返回范围 [1, n] 中所有可能的 k 个数的组合
    vector<vector<int>> combine(int n, int k) {
        result.clear();
        path.clear();
        backtracking(n,k,1);
        return result;
    }
private:
    vector<int> path;       //存放结果
    vector<vector<int>> result; //存放结果的集合
    /*
    递归函数 
        参数：
    确定终止条件
    单层递归的逻辑
    */
    void backtracking(int n, int k, int startIndex) { //回溯函数
        if (path.size() ==k) {
            result.push_back(path);
            return;
        }
        for (int i = startIndex; i<=n; i++) {
            path.push_back(i);
            backtracking(n,k,i+1);
            path.pop_back();
        }
    }

};