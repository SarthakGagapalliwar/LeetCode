class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }

        string rot=s;

        for(int i=0; i<s.size(); i++){
            if(rot==goal){
                return true;
            }

            char ch=rot[0];
            rot.erase(0,1);
            rot.push_back(ch);
        }

        return false;
    }
};