class Solution {
public:
    string largestOddNumber(string num) {
       int ans=-1;
       for(int i=num.size()-1; i>=0; i--){
            char c=num[i];
            int num2=c-'0';
            if(num2 % 2 !=0){
                ans=i;
                break;
            }
       }
       if(ans==-1){
        return "";
       }

       return num.substr(0,ans+1);
    }
};
