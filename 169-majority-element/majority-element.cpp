class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = nums[0],count = 0;

        for(int i: nums){
            if (i == majority){ count++; }
            else{ count--; }

            if(count == 0){ majority = i; count++;}
        }
        return majority;
    }
};