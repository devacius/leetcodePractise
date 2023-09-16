class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0)return {};
        vector<string> ans;
        int start=nums[0],end=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                end=nums[i];
            }
            else{
                if(start==end){
                    string s=to_string(start);
                    ans.push_back(s);
                    start=nums[i];
                    end=nums[i];
                }
                else{
                    string s=to_string(start)+"->"+to_string(end);
                    ans.push_back(s);
                    start=nums[i];
                    end=nums[i];
                }
            }
        }
        if(start==end){
                    string s=to_string(start);
                    ans.push_back(s);
                }
                else{
                    string s=to_string(start)+"->"+to_string(end);
                    ans.push_back(s);
                
                }
        
        return ans;
    }
};