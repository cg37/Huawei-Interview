
class Solution {
public:
    string minWindow(string S, string T) {
        int left = 0;
        int right = 0;
        int start = 0;
        int minLen = INT_MAX;
        unordered_map<char, int> need;
        unordered_map<char, int> window;

        for (auto i:T)need[i]++;
        int match = 0;
        while (right < S.length()) {
            char c1 = S[right];
            if (need.count(c1)) {
                window[c1]++;
                if (window[c1] == need[c1])match++;
            }
            right++;
            while (match == need.size()) {
                
                if (right - left < minLen) {
                    minLen = right - left;
                    start = left;
                }
                char c2 = S[left];
                if (need.count(c2)) {
                    window[c2]--;
                    if (window[c2] < need[c2]) match--;
                }
                left++;
            }
        }
    return minLen == INT_MAX ? "" : S.substr(start, minLen);
    }
};