class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ex=nums[0];
        for(int i=1;i<nums.size();i++){
            ex=ex^nums[i];
        }
        return ex;
    }
};