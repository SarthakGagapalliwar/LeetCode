class Solution {
public:
    int trailingZeroes(int n) {
        int res=0;
        int num=n/5;
        while(num>0){
            res+=num;
            num /= 5;
        }
        return res;
    }
};