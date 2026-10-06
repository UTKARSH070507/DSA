class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char,char> pair;
        pair['('] = ')';pair['{'] = '}';pair['['] = ']';
        for(char i : s) {
            if(pair.count(i)) {stk.push(i);}
            else {
                if(stk.empty() || pair[stk.top()] != i)
                    return false;
                stk.pop();
            }
        }
        return stk.empty();
    }
};