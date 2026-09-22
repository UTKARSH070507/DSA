class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        digits[0]++;
        int  i = 0,n = digits.size();

        while(digits[i] > 9 && i != n-1){
            digits[i] = 0;
            digits[i+1]++;
            i++;
        }

        if(digits[n-1] > 9 && i == n-1){
            digits[n-1] = 0;
            digits.push_back(1);
        }

        reverse(digits.begin(),digits.end());

        return digits;
    }
};