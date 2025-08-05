class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int unplace=0;
        int n=fruits.size();
        for(int i=0; i<n; i++){
            bool flag=false;

            for(int j=0; j<n; j++){
                if(fruits[i]<=baskets[j]){
                    baskets[j]=-1;
                    flag=true;
                    break;
                }
            }
            if(!flag){
                unplace++;
            }
        }
        return unplace;
    }
};