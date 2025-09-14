class Solution {
public:
    unordered_set<string>exactSet;
    unordered_map<string,string>caseMp;
    unordered_map<string,string>vowelMp;

    string toLower(string &s){
        string result=s;
        for(char &ch : result){
            ch=tolower(ch);
        }
        return result;
    }

    string replaceVowel(string &s){
        string result=s;
        for(char &ch : result){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                ch='*';
            }
        }
        return result;
    }

    string checkForMatch(string &s){
        if(exactSet.count(s)){
            return s;
        }
        string lower=toLower(s);
        if(caseMp.count(lower)){
            return caseMp[lower];
        }
        string caseS=replaceVowel(lower);
        if(vowelMp.count(caseS)){
            return vowelMp[caseS];
        }
        return "";
    }


    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
           exactSet.clear();
           caseMp.clear();
           vowelMp.clear();

           for(string word : wordlist){
                exactSet.insert(word);

                string lowerCase=toLower(word);
                if(caseMp.find(lowerCase) == caseMp.end()){
                    caseMp[lowerCase] = word;
                }

                string vowelCase = replaceVowel(lowerCase);

                if(vowelMp.find(vowelCase) ==vowelMp.end()){
                    vowelMp[vowelCase]=word;
                }
           }

           vector<string>res;

           for(auto a : queries){
               res.push_back(checkForMatch(a));
           }

           return res;
    }
};