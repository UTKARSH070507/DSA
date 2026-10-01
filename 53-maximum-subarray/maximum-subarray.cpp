class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = nums[0],sum = 0,j = 0;

        for(int i = 0;i < nums.size();i++){
            if(sum + nums[i] > 0){
                sum += nums[i];
                maxi =  max(maxi,sum);
            }
            else{
                sum = 0;
                maxi = max(maxi,nums[i]);
                j = i + 1;
            }
        }
        return maxi;
    }
};