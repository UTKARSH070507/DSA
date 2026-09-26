class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string result = "";
        int i = 0,n = strs.size()-1;
        while(strs[0].size() > i && strs[n].size() > i && strs[0][i] == strs[n][i]){
            result += strs[0][i];
            i++;}

        return result;
    }
};