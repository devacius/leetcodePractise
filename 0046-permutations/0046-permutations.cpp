class Solution {
public:
    void same(vector<vector<int>> &ans, vector<int> &s,vector<int> f, vector<int> &vi){
    if(vi.size()==s.size()){
        ans.push_back(vi);
        return;
    }
    for(int i=0;i<s.size();i++){
        if(f[i]==0){
            vi.push_back(s[i]);
            f[i]=1;
            same(ans,s,f,vi);
            vi.pop_back();
            f[i]=0;
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
    vector<int> vi;
    vector<int> f(nums.size(),0);
    same(ans,nums,f,vi);
        return ans;
    }
};