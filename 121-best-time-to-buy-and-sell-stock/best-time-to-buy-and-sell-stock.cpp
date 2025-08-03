class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int i=0;
        int j=1;
        int ans=0;
        int n=prices.size();
        while(j<n){
            int num = prices[j]-prices[i];
            if(num<0){
                i=j;
                j++;
            }else{
                maxi=max(maxi,num);
                j++;
            }
        }
        return maxi;
    }
};