class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        
        int count=0;
        int ans=0;
        unordered_set<char>st;
        for(auto a :brokenLetters ){
            st.insert(a);
        }
        int  i=0;
        bool flag= true;
        while(text.size()>i){
            char ch=text[i];
            if(st.count(ch)){
                count++;
            }
            if(ch==' '){
                if(count==0) ans++;
                count=0; 
            }else if(i==text.size()-1){  
                if(count==0) ans++;
            }
            i++;
        }

        return ans;
    }
};
