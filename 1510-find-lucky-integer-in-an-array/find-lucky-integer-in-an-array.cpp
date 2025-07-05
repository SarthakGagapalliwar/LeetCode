class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto a :arr){
            mp[a]++;
        }

        int maxi=-1;
        for(auto a :mp){
            if(a.first==a.second){
                maxi=max(maxi,a.first);
            }
        }
        return maxi;

    }
};