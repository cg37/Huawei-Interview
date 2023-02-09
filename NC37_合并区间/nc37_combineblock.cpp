#include <vector>
class Solution {
public:
    vector<Interval> merge(vector<Interval> &intervals) {
        vector<Interval> ans;
        if(intervals.empty()) {
            return ans;
        }
        sort(intervals.begin(),intervals.end(),cmp);
        int start = intervals[0].start;
        int end = intervals[0].end;
        for (int i = 1; i < intervals.size(); i++) {
            if(intervals[i].start > end) {
                ans.push_back({Interval(start, end)});
                start = intervals[i].start;
                end = intervals[i].end;
            }
            else if (intervals[i].end > end) {
                end = intervals[i].end;
            }
        }
        ans.push_back({Interval(start,end)});
        return ans;
    }
private:
    static bool cmp(const struct Interval &a, const struct Interval &b) {
        return a.begin() < b.begin();
    }
};


///**             C 语言                 **///
// #include <stdio.h>

// int cmp (const void *p1, const void *p2) {
//     return (((struct Interval*)p1)->start - ((struct Interval*)p2)->start);
// }
// struct Interval* merge(struct Interval* intervals,
//                         int intervalsLen,
//                         int *returnSize) {
//     (*returnSize) = intervalsLen;
//     struct Interval* reIntervals = (struct Interval*)malloc(sizeof(struct Interval)*intervalsLen);
//     int returnLen = intervalsLen;
//     qsort(intervals, intervalsLen, sizeof(struct Interval), cmp);
//     int k=1;
//     for (int i=0; i<intervalsLen; i++) {
//         if(intervals[i].end <= intervals[i-k].end) {
//             returnLen--;
//             k++;
//         } 
//         else if(intervals[i].strat <= intervals[i-k].end) {
//             intervals[i-k].end = intervals[i].end;
//             returnLen--;
//             k++;
//         } else {
//             intervals[i-k+1].start = intervals[i].start;
//             intervals[i-k+1].end = intervals[i].end;
//         }
//     }
//     *returnSize = returnlen;
//     return intervals;
// }

// int main() {
//     return 0;
// }