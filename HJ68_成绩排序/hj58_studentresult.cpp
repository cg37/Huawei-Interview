#include <vector>
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

struct Student{
    string name;
    int result;
    int firstletter;
    Student():name(""),result(0) {};
    Student(string n, int s, int f) : name(n), result(s), firstletter(f){};
};
class Solution {
public:
    int sortresult(int num, vector<Student> list ,int order) {
        if(order == 1) { //从低到高 
            sort(list.begin(),list.end(),cmp_1);
            
        }
        else if(order == 0){ //从高到低
            sort(list.begin(),list.end(),cmp_0);
        }
       
        for(int i = 0; i<list.size(); i++) {
            cout<<list[i].name<<' '<<list[i].result<<endl;
        }
        return 0;
    }

private:
    static bool cmp_0(Student a, Student b) { //从大到小排序
        if(a.result != b.result){
            return a.result > b.result;
        } else {
            return a.firstletter>b.firstletter;
        }
        
        
    }
    static bool cmp_1( Student a, Student b) {
        if(a.result != b.result) {
            return a.result < b.result;
        } else {
            return a.firstletter>b.firstletter;
        }
    }
};
int main(){
    int num = 0;
    int order = 0;
    cin>>num;
    cin>>order;
    string name;
    int result;
    int firstletter;
    vector<Student> list;
    while (num--) {
        cin>>name>>result;
        firstletter = num;
        list.push_back({Student(name, result,firstletter)});
    }
    Solution().sortresult(num, list, order);
    return 0;
}
/****************C 写法********************/
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// struct student {
//     struct student* pre;
//     struct student* next;
//     char name[16];
//     int grade;
// };
// typedef struct {
//     struct student* node;
//     int size;
// } head_node;

// void add_node(head_node* head, struct student* node) {
//     if(head -> size ==0) {
//         node -> pre = node;
//         node -> next = node;
//         head -> node = node;
//         head -> size = 1;
//     } else {
//         struct student* first = head->node;
//         struct student* last = first->pre;
//         first -> pre = node;
//         node -> next = first;
//         last -> next = node;
//         node -> pre = last;
//         head -> siez
//     }
// }