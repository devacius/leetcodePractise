class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string si;
        for(int i=0;i<s.size();i++){
             if(s[i]!=' '){
                si.push_back(s[i]);
            }
            else if(s[i]==' '&&si.size()>0){

                v.push_back(si);
                si.clear();
            }

            
        }
        if(si.size()>0)v.push_back(si);
        reverse(v.begin(),v.end());
        string str;
        for(auto x:v){
            str+=x+" ";
        }  
        str.erase(str.end()-1);
        return str; 
    }
};