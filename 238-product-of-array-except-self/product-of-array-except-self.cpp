class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(),product = 1;
        vector <int> result(n);
        for(int i = 0;i < n;i++){
            if(i == 0){result[0] = 1;}
            else{
                product = nums[i-1]*product;
                result[i] = product;
            }
        }
        for(int i = n-1;i >= 0;i--){
            if(i == n-1){product = 1;}
            else{product = product*nums[i+1];}
            result[i] = product*result[i];
        }
        return result;
        
    }
};