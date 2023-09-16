class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        vector<int> vi(n+1,0);
        long long sum=nums[0];
        vi[0]=nums[0];
        for(int i=1;i<=n;i++){
            vi[i]=nums[i-1]+sum;
            sum=vi[i];
        }
        int mini=INT_MAX;
       // if(vi[n-1]==target)return n;
        for(int i=0;i<n;i++){
            int tem=vi[i]+target;
            int ans=-1;
            int l=i+1;
            int r=n;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(vi[mid]>=tem){
                    ans=mid;
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            if(ans>=0)
            mini=min(mini,ans-i);
        
        }
        if(mini>0&&mini<INT_MAX)return mini;
        else return 0;
    }
};