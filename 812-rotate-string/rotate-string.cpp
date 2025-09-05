class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }

        string duble=s+s;
        
        return duble.find(goal) != string::npos;
    }
};