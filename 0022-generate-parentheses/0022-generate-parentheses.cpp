class Solution {
public:
    vector<string> ans;
    vector<string> generate(string &s, int open , int close){
        if(open==0&&close==0){
            ans.push_back(s);
            return ans;
        }
        if(open>0){
            s.push_back('(');
            generate(s,open-1,close);
            s.pop_back();
        }
        if(close>0&&open<close){
            s.push_back(')');
            generate(s,open,close-1);
            s.pop_back();
        }
       
        return ans;
    }
    vector<string> generateParenthesis(int n) {
        int open =n;
        int close=n;
        string s;
        vector<string > ans;
        ans=generate(s,open,close);
        return ans;
    }
};