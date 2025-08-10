class Solution {
public:
    string getSort(int n){
        string s=to_string(n);
        sort(s.begin(), s.end());
        return s;
    }
    bool reorderedPowerOf2(int n) {
        string s=getSort(n);

        for(int p=0; p<=29; p++){
            if(s==getSort(1<<p)){
                return true;
            }
        }
        return false;

    }
};