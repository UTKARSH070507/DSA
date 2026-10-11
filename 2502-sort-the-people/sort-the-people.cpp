class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string, greater<int>> pair;

        for (int i = 0; i < names.size(); i++) {
            pair[heights[i]] = names[i];
        }

        auto it = pair.begin();

        for (int i = 0; i < names.size(); i++) {
            names[i] = it->second;
            it++;
        }

        return names;
    }
};