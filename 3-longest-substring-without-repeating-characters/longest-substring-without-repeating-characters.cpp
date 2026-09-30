class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j = 0,maxi = 0;
        unordered_map<int,int> seen;
        for(int i = 0;i < s.length();i++){
            if(seen.count(s[i]) && seen[s[i]] >= j){j = seen[s[i]] + 1;}
            seen[s[i]] = i;
            maxi = max(maxi,i - j + 1);
        }
        return maxi;
    }
};