class Solution {
public:
    unordered_set<string>st;

    void buildSet(){
        for(int p=0; p<=29; p++){
            string s=to_string(1<<p);
            sort(begin(s),end(s));
            st.insert(s);
        }
    }

    bool reorderedPowerOf2(int n) {
        if(st.empty()){
            buildSet();
        }

        string s=to_string(n);
        sort(s.begin(),s.end());

        if(st.find(s) != st.end()){
            return true;
        }

        return false;

    }
};