class Solution {
public:
    string sortSentence(string s) {
        vector<string> seq(9);
        for(int i = 0;i < s.length();i++){
            string word = "";
            while(s[i] == ' '){i++;}
            while (i < s.length() && (s[i] < '0' || s[i] > '9')) {
                word += s[i];
                i++;
            } 

            seq[(s[i] - '0') - 1] = word;
        }
        s = "";
        for (string word : seq) {
            if (!word.empty()) {
                if (!s.empty()) s += " ";
            s += word;
            }
        }
        return s;
    }
};