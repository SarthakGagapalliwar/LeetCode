class Solution {
public:
    string answerString(string word, int numFriends) {
        if(numFriends==1){
            return word;
        }
        int n=word.size();
        string ans;
        int longesPoss=n-(numFriends-1);
        for(int i=0; i<n; i++){
            int cantake=min(longesPoss,n-i);
            ans=max(ans,word.substr(i,cantake));
        }
        return ans;
    }
};