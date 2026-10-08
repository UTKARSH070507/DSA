class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0,i = 0,j = height.size()-1;

        while(i <= j){
            maxi = max(maxi,min(height[i],height[j])*(j-i));
            height[i] >= height[j] ? j-- : i++;
        }
        return maxi;
    }
};