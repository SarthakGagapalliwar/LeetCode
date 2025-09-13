class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> vowels;
        unordered_map<char,int> consonants;


        for (char c : s) {
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
                vowels[c]++;
            } else {
                consonants[c]++;
            }
        }

        int maxVowel = 0;
        for (auto &p : vowels) {
            maxVowel = max(maxVowel, p.second);
        }

        int maxConsonant = 0;
        for (auto &p : consonants) {
            maxConsonant = max(maxConsonant, p.second);
        }

        return maxVowel + maxConsonant;
    }
};