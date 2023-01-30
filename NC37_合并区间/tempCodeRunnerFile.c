int cmp (const void *a, const void *b) {
    return (((struct Interval*)a).start - ((struct Interval*)b).start)
}
struct Interval* merge(struct Interval* intervals,
                        int intervalsLen,
                        int *returnSize) {
    int returnlen = intervalsLen;
    qsor(intervals, intervalsLen, sizeof(struct Interval),cmp);
    for (int i=0,int k=1; i<intervalsLen; i++) {
        if(intercals[i].end <= intervals[i-k].end) {
            returnlen--;
            k++;
        } 
        else if(intervals[i].strat <= intervals[i-k].end) {
            intervals[i-k].end = intervals[i].end;
            returnlen--;
            k++;
        } else {
            intervals[i-k+1].start = intervals[i].start;
            intervals[i-k+1].end = intervals[i].end;
        }
    }
    *returnSize = returnlen;
    return intervals;
}