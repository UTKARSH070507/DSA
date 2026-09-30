class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> seen;
        for(char i : s){
            if(seen.count(i)){return i;}
            seen.insert(i);
        }
        return ' ';
    }
};