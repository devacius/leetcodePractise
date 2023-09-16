class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        bool b=false;
        for(int i=0;i<magazine.size();i++){
            m[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.size();i++){
            if(m[ransomNote[i]]){
               m[ransomNote[i]]--;
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