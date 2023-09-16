class Solution {
public:
    bool isAnagram(string s, string t) {
        bool b=false;
        unordered_map<char,int> m;
        if(t.size()!=s.size()){
            return b;
        }
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(m[t[i]]){
                m[t[i]]--;
                b=true;
            }
            else{
                b=false;
                break;
            }
        }
        return b;
    }
};