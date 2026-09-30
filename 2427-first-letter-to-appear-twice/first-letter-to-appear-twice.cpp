class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> seen(256,0);
        for(char i : s){
            if(seen[i] != 0){return i;}
            seen[i] = 1;
        }
        return ' ';
    }
};