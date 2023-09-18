class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int i=0;
        vector<pair<int,int>>vp;
        for(auto x:mat){
            vector<int> tem=x;
            int count=0;
            for(auto y:tem){
                if(y==1)count++;
            }
            
            vp.push_back({count,i});
            i++;
        }
        sort(vp.begin(),vp.end());
        vector<int>ans;
        
        for( i=1;i<vp.size();i++){
            if(ans.size()<k){
                if(vp[i].first>vp[i-1].first)ans.push_back(vp[i-1].second);
                else if(vp[i].second>vp[i-1].second)ans.push_back(vp[i-1].second);
            }
        }
        if(ans.size()<k)ans.push_back(vp[i-1].second);
        return ans;
    }
};