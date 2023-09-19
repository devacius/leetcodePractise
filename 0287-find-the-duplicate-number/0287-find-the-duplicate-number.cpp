class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(auto num:nums){
            int id=abs(num);
            if(nums[id]<0){
                return id;
            }
            nums[id]=-nums[id];
        }
        return n;
    }
    
};