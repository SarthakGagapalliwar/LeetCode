class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ans;

        string prev = "";

        for(auto a : words){
            string sortWord = a;
            sort(sortWord.begin(),sortWord.end());

            if(prev != sortWord){
                ans.push_back(a);
                prev=sortWord;
            }
        }

        return ans;
    }
};