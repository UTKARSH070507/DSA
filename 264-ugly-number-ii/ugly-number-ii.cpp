class Solution {
public:
    int nthUglyNumber(int n) {
        vector <int> series(n,0);
        int p1 = 0, p2 = 0,p3 = 0;
        int num2 = 2,num3 = 3,num5 = 5;
        series[0] = 1;

        for(int i = 1;i < n;i++){
            series[i] = min(num2,min(num3,num5));

            if(series[i] == num2){
                p1++;
                num2 = series[p1]*2;
            }
            if(series[i] == num3){
                p2++;
                num3 = series[p2]*3;
            }
            if(series[i] == num5){
                p3++;
                num5 = series[p3]*5;
            }
        }
        return series[n-1];
    }
};