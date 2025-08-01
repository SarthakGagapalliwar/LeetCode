class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;

        for(auto a:strs){
            string key=a;

            sort(a.begin(),a.end());

            mp[a].push_back(key);
        }

        vector<vector<string>>ans;

        for(auto a : mp){
            ans.push_back(a.second);
        }

        return ans;
    }
};