class Solution {
public:
    bool isPalindrome(string s) {
        int f=0;
        int t=s.size()-1;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        while(f<t){
            if(((s[f]>=65&&s[f]<=90)||(s[f]>=97&&s[f]<=122)||(s[f]>=48&&s[f]<=57))&&((s[t]>=65&&s[t]<=90)||(s[t]>=97&&s[t]<=122)||(s[t]>=48&&s[t]<=57))){
                if(s[f]!=s[t])return false;
                 f++;
            t--;
            }
            else if((s[f]>=65&&s[f]<=90)||(s[f]>=97&&s[f]<=122)||(s[f]>=48&&s[f]<=57)){
                t--;
            }
            else {
                f++;
            }
           
        }
        return true;
    }
};