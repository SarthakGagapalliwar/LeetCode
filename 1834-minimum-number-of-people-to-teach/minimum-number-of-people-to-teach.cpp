class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        unordered_set<int> sadUsers;

        for(auto &friends : friendships){
            int u = friends[0] - 1;
            int v = friends[1] - 1;

            unordered_set<int> langset(begin(languages[u]), end(languages[u]));
            bool canTalk = false;

            for(int lang : languages[v]){
                if(langset.count(lang)){
                    canTalk = true;  // ✅ fix
                    break;
                }
            }

            if(!canTalk){
                sadUsers.insert(u);
                sadUsers.insert(v);
            }
        }

        vector<int> langCount(n + 1, 0);
        int mostKnownLang = 0;

        for(int user : sadUsers){
            for(int lang : languages[user]){
                langCount[lang]++;
                mostKnownLang = max(mostKnownLang, langCount[lang]);
            }
        }

        return sadUsers.size() - mostKnownLang;
    }
};
