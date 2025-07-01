class Solution {
public:
    int maxDifference(string s) {
        int maxi=-1;
        unordered_map<char,int>mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        vector<int>freq;
        for(auto& [key,value]:mp){
            if(value>1){
            freq.push_back(value);
            }
        }
        sort(freq.rbegin(),freq.rend());
        int odd=0;
        int oddnum=0;
        int mini=INT_MAX;
        bool flag=false;
        for(int i=0; i<freq.size(); i++){
            if(freq[i]%2!=0){
                odd=freq[i];
                flag=true;
                break;
            }
        }
        if(flag==true){
            oddnum=odd;
        }else{
            oddnum=1;
        }
        for(int i=0; i<freq.size(); i++){
            if(freq[i]%2==0){
                mini=min(mini,freq[i]);
            }
        }
        maxi=oddnum-mini;
        return maxi;

    }
};