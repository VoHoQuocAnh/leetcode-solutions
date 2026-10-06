class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastindex;
        int left = 0, maxlen = 0;
        for(int right = 0; right<s.size();right++){
            if(lastindex.count(s[right])){
                left = max(left,lastindex[s[right]]+1);
            }
            lastindex[s[right]] =right;
            maxlen=max(maxlen,right - left + 1);
        }
        return maxlen;
    }
};