class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       map<char,int> m;
        int i=0,j=0,maxi=0;
        while(j<s.size()){
            if(m[s[j]]+1>1){
                m[s[i]]--;
                i++;
            }
            else{
                m[s[j]]++;
                maxi=std::max(maxi,j-i+1);
                j++;
            }
        }
        return maxi;
        
    }
};