class Solution {
public:

    vector<int>getVecCount(int n){
        vector<int>num(10,0);

        while(n>0){
            num[n%10]++;
            n/=10;
        }
        return num;
    }


    bool reorderedPowerOf2(int n) {
        vector<int>input=getVecCount(n);

        for(int p=0; p<=29; p++){
            if(input==getVecCount(1<<p)){
                return true;
            }
        }
        return false;
    }
};