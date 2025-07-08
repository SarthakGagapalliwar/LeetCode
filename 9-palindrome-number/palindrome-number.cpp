class Solution {
public:
    bool isPalindrome(int x) {
        bool flag=true;

        string num=to_string(x);
        int s=0;
        int e=num.size()-1;

        while(e>=s){
            if(num[s]!=num[e]){
                return false;
            }
            s++;
            e--;
        }

        return true;
        
    }
};