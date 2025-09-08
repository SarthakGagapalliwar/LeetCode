class Solution {
public:
    bool chcekZero( int num){
        
        while(num>0){
            if(num%10==0){
                return false;
            }
            num/=10;
        }
        return true;
    }

    vector<int> getNoZeroIntegers(int n) {
        int a;
        int b;

        for(int i=1; i<n; i++){
            a=i;
            b=n-i;
            if(chcekZero(a) &&  chcekZero(b)){
                return {a,b};
            }
        }
        return {};
    }
};