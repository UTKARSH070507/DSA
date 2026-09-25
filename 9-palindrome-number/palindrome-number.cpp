class Solution {
public:
    bool isPalindrome(int x) {
        long long ans = 0,x2 = x;
        if(x < 0){return false;}
        while(x2 != 0){
            ans = ans*10 + x2%10;
            x2 = x2/10;
        }
        return x == ans;
    }
};