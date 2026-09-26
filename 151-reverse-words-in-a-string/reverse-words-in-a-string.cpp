class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int n = s.size();
        for(int i = 0;i < n;i++){
            if(s[i] == ' '){
                continue;
            }
            string word = "";
            while(i < n && s[i] != ' '){
                word += s[i];
                i++;
            }
            result = word + ' ' + result;

        }
        if (!result.empty()){result.pop_back();}
        return result;
    }
};