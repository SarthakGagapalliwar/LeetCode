class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> dist(dictionary.begin(), dictionary.end());

        stringstream ss(sentence);

        string words;
        string res;

        while(ss >> words){
            string pre;

            bool flag= false;

            for(int i=0; i<words.size(); i++){
                pre=words.substr(0,i);
                if(dist.count(pre)){
                    if(!res.empty()) res+= " ";
                    res+=pre;
                    flag=true;
                    break;
                }
            }

            if(!flag){
                if (!res.empty()) res += " ";
                res += words;
            }

        }

        return res;
    }
};