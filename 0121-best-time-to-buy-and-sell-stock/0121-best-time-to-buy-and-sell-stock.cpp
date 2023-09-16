class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int mini=1e9;
        int ans=0;
        for(auto x:prices){
            if(x<mini){
                mini=x;
                ans=0;
                
            }
            ans=x-mini;
            maxi=max(maxi,ans);
            

        }
        return maxi;
    }
};