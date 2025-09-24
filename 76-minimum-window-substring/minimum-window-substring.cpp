class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        if(t.size()>n) return "";

        unordered_map<char,int>mp;
        for(auto a : t){
            mp[a]++;
        }
        int i=0;
        int j=0;
        int minWindow=INT_MAX;
        int start=0;
        int req=t.size();

        while(n>j){
            char ch=s[j];
            if(mp[ch]>0){
                req--;
            }
            mp[ch]--;

            while(req==0){
                int currWind=j-i+1;
                if(minWindow>currWind){
                    minWindow=currWind;
                    start=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    req++;
                }
                i++;
            }
            j++;

        }
        return minWindow==INT_MAX ?  "" : s.substr(start,minWindow);

    }
};