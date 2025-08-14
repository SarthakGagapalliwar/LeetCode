class Solution {
public:
    string largestGoodInteger(string num) {
        int i=0;
        int j=1;
        int n=num.size();
        int maxi=INT_MIN;

        while(i<n){
            string to="";
            int cnt=1;
            to+=num[i];
            while(j<n && num[i]==num[j]){
                j++;
                cnt++;
            }
            if(cnt>=3){
                to=string(3,num[i]);
                maxi=max(maxi,stoi(to));
            }

            i=j;
            j++;
        }

        if(maxi==INT_MIN) return "";
        string ans=to_string(maxi);

        while(ans.size()<3) ans+="0";
        return ans;
    }
};