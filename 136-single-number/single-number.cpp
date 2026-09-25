class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int m = nums.front();
        for(int i = 1;i < nums.size();i++){m ^= nums[i];}
        return m;
    }
};