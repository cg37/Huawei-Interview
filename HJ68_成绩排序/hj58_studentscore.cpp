#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct stu{
    string name;
    int score;
    int pos;
};
vector<stu> vec;
bool cmp_0(stu a, stu b)
{
    if(a.score != b.score)
    {
        return a.score > b.score;
    }else{
        return a.pos < b.pos;
    }
}

bool cmp_1(stu a, stu b)
{
    if(a.score != b.score)
    {
        return a.score < b.score;
    }else{
        return a.pos < b.pos;
    }
}
int main()
{
    int n, op;
    scanf("%d%d", &n, &op);
    for(int i = 0; i < n; i++)
    {
        stu a;
        cin >> a.name >> a.score;
        a.pos = i;
        vec.push_back(a);
    }
    if(op == 0){
        sort(vec.begin(), vec.end(), cmp_0);
    }else if(op == 1)
    {
        sort(vec.begin(), vec.end(), cmp_1);
    }
    for(vector<stu>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        cout << it->name << " " << it->score << endl;
    }
    return 0;
}
