class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int num=prices[0];

        int ans=0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i]>num){
                int maxi=prices[i]-num;
                ans=max(maxi,ans);
            }else{
                num=prices[i];
            }
        }
        return ans;
    }
};
