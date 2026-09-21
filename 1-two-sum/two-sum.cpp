class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> value;
        for(int i = 0;i<nums.size();i++){
            if(value.count(target - nums[i])){
                return {value[target - nums[i]],i};
            }
            else{
                value[nums[i]] = i;
            }
        }
        return {0,0};
    }
};