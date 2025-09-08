class Solution {
public:
    bool chcekZero( int num){
        
        while(num>0){
            if(num%10==0){
                return true;
            }
            num/=10;
        }
        return false;
    }

    vector<int> getNoZeroIntegers(int n) {
        int a=1;
        int b=n-1;

        while(chcekZero(a) ||  chcekZero(b)){
           a++;
           b--;
        }
        return {a,b};
    }
};