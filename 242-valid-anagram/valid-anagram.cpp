class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){return false;}
        unordered_map <char,int> seen;
        for(int i = 0;i < s.length();i++){
            if(seen.count(s[i])){seen[s[i]] = seen[s[i]]+1;}
            else{seen[s[i]] = 1;}
        }
        for(int i = 0;i < t.length();i++){
            if(seen.count(t[i])){
                seen[t[i]] = seen[t[i]]-1;
                if(seen[t[i]] == 0){seen.erase(t[i]);}
            }
            else{return false;}
        }
        return true;
    }
};