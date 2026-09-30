class Solution {
public:
    char repeatedCharacter(string s) {
        int seen[26] = {0};
        for(char i : s){
            if(seen[i - 'a'] != 0){return i;}
            seen[i - 'a'] = 1;
        }
        return ' ';
    }
};