class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        cost.push_back(0);
        int arr[n+1];
        for(int i=0;i<n+1;i++){
            arr[i]=0;
        }
        arr[0]=cost[0];
        arr[1]=cost[1];
        for(int i=2;i<=n;i++){
            arr[i]+=min(arr[i-2],arr[i-1])+cost[i];
        }
        return arr[n];
        
    }
};